/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton_Search;
    QGroupBox *groupBox_2;
    QLabel *label;
    QListWidget *listWidget_History;
    QTextBrowser *textBrowser_Lyric;
    QListWidget *listWidget_Search;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_About;
    QPushButton *pushButton_Skin;
    QPushButton *pushButton_Close;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QSlider *TimeSlider;
    QLabel *label_Time;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_Last;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_Play;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_Next;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_Loop;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSlider *VolumnSlider;
    QLabel *label_Volumn;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName("MainWidget");
        MainWidget->resize(1099, 643);
        groupBox = new QGroupBox(MainWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 60, 1081, 61));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 100, 40));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::ArrowCursor));
        pushButton->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"background-color:rgba(255,255,255,50);"));
        pushButton->setIconSize(QSize(20, 20));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(120, 10, 851, 40));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\226\260\345\256\213\344\275\223")});
        font1.setPointSize(12);
        font1.setBold(false);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"background-color:rgba(255,255,255,50);"));
        pushButton_Search = new QPushButton(groupBox);
        pushButton_Search->setObjectName("pushButton_Search");
        pushButton_Search->setGeometry(QRect(980, 10, 93, 40));
        pushButton_Search->setFont(font);
        pushButton_Search->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"background-color:rgba(255,255,255,50);"));
        groupBox_2 = new QGroupBox(MainWidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 130, 1081, 391));
        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 81, 20));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);"));
        listWidget_History = new QListWidget(groupBox_2);
        listWidget_History->setObjectName("listWidget_History");
        listWidget_History->setGeometry(QRect(820, 40, 251, 341));
        listWidget_History->viewport()->setProperty("cursor", QVariant(QCursor(Qt::OpenHandCursor)));
        listWidget_History->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"background-color:rgba(255,255,255,50);"));
        textBrowser_Lyric = new QTextBrowser(groupBox_2);
        textBrowser_Lyric->setObjectName("textBrowser_Lyric");
        textBrowser_Lyric->setGeometry(QRect(260, 40, 551, 341));
        textBrowser_Lyric->viewport()->setProperty("cursor", QVariant(QCursor(Qt::OpenHandCursor)));
        textBrowser_Lyric->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"background-color:rgba(255,255,255,50);"));
        listWidget_Search = new QListWidget(groupBox_2);
        listWidget_Search->setObjectName("listWidget_Search");
        listWidget_Search->setGeometry(QRect(10, 40, 241, 341));
        listWidget_Search->viewport()->setProperty("cursor", QVariant(QCursor(Qt::OpenHandCursor)));
        listWidget_Search->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"background-color:rgba(255,255,255,50);"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(260, 10, 67, 20));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(820, 10, 81, 20));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);"));
        widget = new QWidget(MainWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(940, 0, 161, 51));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_About = new QPushButton(widget);
        pushButton_About->setObjectName("pushButton_About");
        pushButton_About->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_About->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:0px; \n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgba(230,0,0,0.5);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:rgba(95,95,95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgba(0,0,0,100);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_About->setIcon(icon);
        pushButton_About->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_About);

        pushButton_Skin = new QPushButton(widget);
        pushButton_Skin->setObjectName("pushButton_Skin");
        pushButton_Skin->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_Skin->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:0px;\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgba(230,0,0,0.5);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:rgba(95,95,95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgba(0,0,0,100);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/skin.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Skin->setIcon(icon1);
        pushButton_Skin->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_Skin);

        pushButton_Close = new QPushButton(widget);
        pushButton_Close->setObjectName("pushButton_Close");
        pushButton_Close->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_Close->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:0px;\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgba(230,0,0,0.5);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:rgba(95,95,95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgba(0,0,0,100);\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Close->setIcon(icon2);
        pushButton_Close->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_Close);

        widget1 = new QWidget(MainWidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 540, 1081, 28));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        TimeSlider = new QSlider(widget1);
        TimeSlider->setObjectName("TimeSlider");
        TimeSlider->setCursor(QCursor(Qt::OpenHandCursor));
        TimeSlider->setMaximum(100);
        TimeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(TimeSlider);

        label_Time = new QLabel(widget1);
        label_Time->setObjectName("label_Time");
        label_Time->setFont(font);
        label_Time->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);"));

        horizontalLayout_2->addWidget(label_Time);

        widget2 = new QWidget(MainWidget);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(10, 580, 1081, 51));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_Last = new QPushButton(widget2);
        pushButton_Last->setObjectName("pushButton_Last");
        pushButton_Last->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_Last->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:0px; \n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgba(230,0,0,0.5);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:rgba(95,95,95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgba(0,0,0,100);\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/pre-hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Last->setIcon(icon3);
        pushButton_Last->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_Last);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");

        horizontalLayout_3->addLayout(horizontalLayout_4);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        pushButton_Play = new QPushButton(widget2);
        pushButton_Play->setObjectName("pushButton_Play");
        pushButton_Play->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_Play->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:0px; \n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgba(230,0,0,0.5);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:rgba(95,95,95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgba(0,0,0,100);\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/pase-hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Play->setIcon(icon4);
        pushButton_Play->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_Play);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        pushButton_Next = new QPushButton(widget2);
        pushButton_Next->setObjectName("pushButton_Next");
        pushButton_Next->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_Next->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:0px; \n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgba(230,0,0,0.5);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:rgba(95,95,95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgba(0,0,0,100);\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/next-hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Next->setIcon(icon5);
        pushButton_Next->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_Next);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton_Loop = new QPushButton(widget2);
        pushButton_Loop->setObjectName("pushButton_Loop");
        pushButton_Loop->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_Loop->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:0px; \n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgba(230,0,0,0.5);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:rgba(95,95,95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgba(0,0,0,100);\n"
"}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/loop-hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Loop->setIcon(icon6);
        pushButton_Loop->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_Loop);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        VolumnSlider = new QSlider(widget2);
        VolumnSlider->setObjectName("VolumnSlider");
        VolumnSlider->setCursor(QCursor(Qt::OpenHandCursor));
        VolumnSlider->setMaximum(100);
        VolumnSlider->setPageStep(30);
        VolumnSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(VolumnSlider);

        label_Volumn = new QLabel(widget2);
        label_Volumn->setObjectName("label_Volumn");
        label_Volumn->setFont(font);
        label_Volumn->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);"));

        horizontalLayout_3->addWidget(label_Volumn);

        groupBox_2->raise();
        groupBox->raise();
        pushButton_About->raise();
        pushButton_Skin->raise();
        pushButton_Close->raise();
        TimeSlider->raise();
        label_Time->raise();
        pushButton_Last->raise();
        pushButton_Play->raise();
        pushButton_Next->raise();
        pushButton_Loop->raise();
        VolumnSlider->raise();
        label_Volumn->raise();

        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QCoreApplication::translate("MainWidget", "MainWidget", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("MainWidget", "\346\255\214\346\233\262\345\220\215\347\247\260", nullptr));
        lineEdit->setText(QString());
        pushButton_Search->setText(QCoreApplication::translate("MainWidget", "\346\220\234\347\264\242", nullptr));
        groupBox_2->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWidget", "\346\220\234\347\264\242\346\255\214\346\233\262", nullptr));
        label_2->setText(QCoreApplication::translate("MainWidget", "\346\255\214\350\257\215", nullptr));
        label_3->setText(QCoreApplication::translate("MainWidget", "\346\222\255\346\224\276\350\256\260\345\275\225", nullptr));
        pushButton_About->setText(QString());
        pushButton_Skin->setText(QString());
        pushButton_Close->setText(QString());
        label_Time->setText(QCoreApplication::translate("MainWidget", "00:00", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_Last->setToolTip(QCoreApplication::translate("MainWidget", "\344\270\212\344\270\200\346\233\262", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_Last->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_Play->setToolTip(QCoreApplication::translate("MainWidget", "\346\222\255\346\224\276|\346\232\202\345\201\234", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_Play->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_Next->setToolTip(QCoreApplication::translate("MainWidget", "\344\270\213\344\270\200\346\233\262", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_Next->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_Loop->setToolTip(QCoreApplication::translate("MainWidget", "\345\276\252\347\216\257\346\222\255\346\224\276", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_Loop->setText(QString());
        label_Volumn->setText(QCoreApplication::translate("MainWidget", "00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
