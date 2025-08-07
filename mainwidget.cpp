#include "mainwidget.h"
#include "ui_mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);

    //固定窗口尺寸大小
    this->setFixedSize(this->geometry().size());
    //去掉标题栏
    this->setWindowFlag(Qt::FramelessWindowHint);

    // 1、检查是否已存在名为 "sql_default_connection" 的数据库连接
    if(QSqlDatabase::contains("sql_default_connection"))
    {
        // 如果连接已存在，则获取该连接
        db = QSqlDatabase::database("sql_default_connection");
    }
    else
    {
        // 如果连接不存在，则新建一个 SQLite 数据库连接
        db = QSqlDatabase::addDatabase("QSQLITE");
        // 设置 SQLite 数据库的文件名
        db.setDatabaseName("MP3listdatabase.db");
    }

    // 2、尝试打开数据库
    if(!db.open())
    {
        // 如果打开失败，弹出错误消息框，显示数据库错误信息
        // 0 表示无父窗口，独立显示
        // QObject::tr("Open Data Error")（标题文本） tr() 是 Qt 的 国际化翻译函数，用于支持多语言
        // db.lastError().text() 获取数据库操作的最后一条错误信息，并显示在消息框中
        QMessageBox::critical(0,QObject::tr("Open Data Error"),db.lastError().text());
    }
    else
    {
        // 3、定义query对象，得到打开的数据库标识，如果数据库打开成功，则执行 SQL 语句
        QSqlQuery query;
        // 定义 SQL 语句：如果 searchlist 表不存在，则创建该表
        QString sql = "CREATE TABLE IF NOT EXISTS searchlist(id INTEGER,songname TEXT,singername TEXT,album_id TEXT,hash TEXT)";
        if(!query.exec(sql)) // 执行 SQL 语句
        {
            QMessageBox::critical(0, QObject::tr("create searchlist Error"), db.lastError().text());
        }

        //歌曲播放记录数据表
        sql = "CREATE TABLE IF NOT EXISTS historysong(id INTEGER PRIMARY KEY AUTOINCREMENT,songname TEXT,singername TEXT,album_id TEXT,hash TEXT)";
        if(!query.exec(sql))
        {
            QMessageBox::critical(0, QObject::tr("create historysong Error"), db.lastError().text());
        }

        //查询播放记录数据表中的歌曲
        sql = "SELECT * FROM historysong";
        if(!query.exec(sql))
        {
            QMessageBox::critical(0, QObject::tr("select historysong Error"), db.lastError().text());
        }

        // 循环遍历查询结果的每一行数据
        while(query.next())
        {
            QString songname,singername;
            QSqlRecord rec = query.record(); // 获取当前行的记录（包含所有字段信息）
            int albumkey = rec.indexOf("songname"); // 找到"songname"字段的列索引
            int hashkey = rec.indexOf("singername"); // 找到"singername"字段的列索引
            songname = query.value(albumkey).toString(); // 通过字段索引获取值，并转换为字符串
            singername = query.value(hashkey).toString(); // 通过字段索引获取值，并转换为字符串

            QString strshow = songname + "--" + singername;
            QListWidgetItem *item = new QListWidgetItem(strshow); // 创建一个列表项（QListWidgetItem），文本内容为拼接后的字符串
            ui->listWidget_History->addItem(item); // 将列表项添加到界面中的QListWidget控件
        }

        //播放操作
        player = new QMediaPlayer;
        playerlist = new QMediaPlayer;
        connect(player,&QMediaPlayer::positionChanged,this,&MainWidget::updateDuration); // 连接播放进度更新信号
        connect(this,&MainWidget::lyricShow,this,&MainWidget::lyricTextShow); // 连接自定义歌词信号
        connect(ui->listWidget_Search,&QListWidget::doubleClicked,this,&MainWidget::playSearchSong); // 连接搜索列表双击事件
        connect(ui->listWidget_History,&QListWidget::doubleClicked,this,&MainWidget::playHistorySong); // 连接播放记录列表双击事件

        num = 0;
    }
}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/images/musicplayer_ui.jpg"));
}

void MainWidget::on_pushButton_Close_clicked()
{
    //关闭窗口
    close();
}

void MainWidget::on_pushButton_Skin_clicked()
{

}

void MainWidget::on_pushButton_About_clicked()
{

}

//搜索音乐
void MainWidget::on_pushButton_Search_clicked()
{
    //将原有歌曲数据清空
    ui->listWidget_Search->clear();

    //先清理数据库中已经存储的hash等数据
    QSqlQuery query;
    QString sql = "DELETE FROM searchlist";
    if(!query.exec(sql))
    {
        QMessageBox::critical(0, QObject::tr("delete searchlist Error"), db.lastError().text());
    }

    //根据用户输入的音乐名称发起http请求操作
    QString url = kugouSearchApi + QString("format=json & keyword=%1 & page=1 & pagesize=20 & showtype=1").arg(ui->lineEdit_Search->text());
    httpAccess(url);
    QByteArray  JsonData; //用于存储HTTP返回的原始JSON数据
    QEventLoop loop; //创建一个事件循环
    //HTTP请求完成时发出finish信号
    auto c = connect(this,finish,[&](const QByteArray &data){
        JsonData = data; //将数据存入JsonData
        loop.exit(1); //退出事件循环
    });
    loop.exec(); //启动事件循环，阻塞当前线程执行，直到调用loop.exit()
    disconnect(c); //断开之前建立的信号槽连接，避免重复触发

    //解析网页回复的数据，将搜索得到的音乐hash和album_id与列表的索引值存放到数据库
    hashJsonParse(JsonData);
}

void MainWidget::on_VolumnSlider_valueChanged(int value)
{

}

void MainWidget::on_pushButton_Last_clicked()
{

}

void MainWidget::on_pushButton_Play_clicked()
{

}

void MainWidget::on_pushButton_Next_clicked()
{

}

void MainWidget::on_pushButton_Loop_clicked()
{

}

void MainWidget::on_TimeSlider_valueChanged(int value)
{

}

void MainWidget::on_TimeSlider_sliderPressed()
{

}

void MainWidget::on_TimeSlider_sliderReleased()
{

}

//更新播放的进度条和显示的时间
void MainWidget::updateDuration(qint64 value)
{
    ui->TimeSlider->setRange(0,player->duration()); //设置TimeSlider的范围最小值为0, 最大值为播放器的总时长
    ui->TimeSlider->setValue(value); //将滑块位置更新到当前播放位置
}

//读取网络数据的槽函数
void MainWidget::netReply(QNetworkReply *reply)
{
    //获取响应的信息，状态码为200属于正常
    QVariant status_code = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute); //获取HTTP响应的状态码
    qDebug()<<status_code;
    reply->attribute(QNetworkRequest::RedirectionTargetAttribute); //获取重定向目标地址

    //没有错误就返回
    if(reply->error() == QNetworkReply::NoError)
    {
        QByteArray data = reply->readAll();
        emit finish(data);
    }
    else
    {
        qDebug()<<reply->errorString();
    }
    reply->deleteLater(); //使用deleteLater()安全删除reply对象
}

void MainWidget::lyricTextShow(QString)
{

}

void MainWidget::playSearchSong()
{

}

void MainWidget::playHistorySong()
{

}

void MainWidget::downloadPlayer(QString album_id, QString hash)
{

}

//访问http网页
void MainWidget::httpAccess(QString url)
{
    //实例化网络请求操作事项
    request = new QNetworkRequest;
    //将url网页地址存入request请求中
    request->setUrl(url);
    //实例化网络管理（访问）
    manager = new QNetworkAccessManager;
    //通过get方法，上传具体的请求
    manager->get(*request);
    //当网页回复消息时，触发finished信号，才能读取数据信息
    connect(manager,&QNetworkAccessManager::finished,this,&MainWidget::netReply);
}

//音乐的hash和album_id值解析，使用Json
void MainWidget::hashJsonParse(QByteArray)
{

}

QString MainWidget::musicJsonParse(QByteArray)
{

}

void MainWidget::mouseMoveEvent(QMouseEvent *event)
{
    if(mousePress)
    {
        QPoint movepos = event->globalPos(); //窗口初始位置
        move(movepos-movePoint);
    }
}

void MainWidget::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton) // 判断是否按下了鼠标左键
    {
        mousePress = true; // 标记鼠标左键按下状态为 true
    }
    movePoint = event->globalPos()-pos(); // 计算窗口移动的基准偏移量
}

void MainWidget::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event); //Qt宏，用于显式标记未使用的参数
    mousePress = false; // 重置鼠标按下状态
}

