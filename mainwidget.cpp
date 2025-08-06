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


void MainWidget::on_pushButton_Search_clicked()
{

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

void MainWidget::updateDurawtion(qint64)
{

}

void MainWidget::netReply(QNetworkReply *)
{

}

void MainWidget::lyricTextShow(QString)
{

}

void MainWidget::downloadPlayer(QString album_id, QString hash)
{

}

void MainWidget::httpAccess(QString)
{

}

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
        move(movePoint);
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

