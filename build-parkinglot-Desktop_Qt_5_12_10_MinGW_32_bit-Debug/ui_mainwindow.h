/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QLabel *queue1;
    QLabel *controllabel;
    QLabel *parkinglot7;
    QLabel *parkinglot6;
    QLabel *parkinglot5;
    QLabel *parkinglot4;
    QLabel *parkinglot3;
    QLabel *parkinglot2;
    QLabel *parkinglot1;
    QLabel *queue5;
    QLabel *queue4;
    QLabel *queue3;
    QLabel *queue2;
    QLabel *parkinglot8;
    QLabel *parkinglot9;
    QLabel *parkinglot10;
    QLabel *inputlabel;
    QPushButton *enterbutton;
    QPushButton *outbutton;
    QPushButton *checkbutton;
    QLineEdit *inputnum;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *showmessage;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1133, 689);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        queue1 = new QLabel(frame);
        queue1->setObjectName(QString::fromUtf8("queue1"));
        queue1->setGeometry(QRect(40, 160, 57, 38));
        queue1->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(\"D:/QT/program/parkinglot/parkinglot.png\");\n"
"font:20px bold;\n"
"}"));
        queue1->setAlignment(Qt::AlignCenter);
        controllabel = new QLabel(frame);
        controllabel->setObjectName(QString::fromUtf8("controllabel"));
        controllabel->setGeometry(QRect(600, 80, 101, 31));
        controllabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font:25px blod;\n"
"}"));
        parkinglot7 = new QLabel(frame);
        parkinglot7->setObjectName(QString::fromUtf8("parkinglot7"));
        parkinglot7->setGeometry(QRect(210, 110, 57, 38));
        parkinglot7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(\"D:/QT/program/parkinglot/parkinglot.png\");\n"
"font:20px bold;\n"
"}"));
        parkinglot7->setAlignment(Qt::AlignCenter);
        parkinglot6 = new QLabel(frame);
        parkinglot6->setObjectName(QString::fromUtf8("parkinglot6"));
        parkinglot6->setGeometry(QRect(150, 110, 57, 38));
        parkinglot6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(\"D:/QT/program/parkinglot/parkinglot.png\");\n"
"font:20px bold;\n"
"}"));
        parkinglot6->setAlignment(Qt::AlignCenter);
        parkinglot5 = new QLabel(frame);
        parkinglot5->setObjectName(QString::fromUtf8("parkinglot5"));
        parkinglot5->setGeometry(QRect(390, 70, 57, 38));
        parkinglot5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(\"D:/QT/program/parkinglot/parkinglot.png\");\n"
"font:20px bold;\n"
"}"));
        parkinglot5->setAlignment(Qt::AlignCenter);
        parkinglot4 = new QLabel(frame);
        parkinglot4->setObjectName(QString::fromUtf8("parkinglot4"));
        parkinglot4->setGeometry(QRect(330, 70, 57, 38));
        parkinglot4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(\"D:/QT/program/parkinglot/parkinglot.png\");\n"
"font:20px bold;\n"
"}"));
        parkinglot4->setAlignment(Qt::AlignCenter);
        parkinglot3 = new QLabel(frame);
        parkinglot3->setObjectName(QString::fromUtf8("parkinglot3"));
        parkinglot3->setGeometry(QRect(270, 70, 57, 38));
        parkinglot3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(\"D:/QT/program/parkinglot/parkinglot.png\");\n"
"font:20px bold;\n"
"}"));
        parkinglot3->setAlignment(Qt::AlignCenter);
        parkinglot2 = new QLabel(frame);
        parkinglot2->setObjectName(QString::fromUtf8("parkinglot2"));
        parkinglot2->setGeometry(QRect(210, 70, 57, 38));
        parkinglot2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(\"D:/QT/program/parkinglot/parkinglot.png\");\n"
"font:20px bold;\n"
"}"));
        parkinglot2->setAlignment(Qt::AlignCenter);
        parkinglot1 = new QLabel(frame);
        parkinglot1->setObjectName(QString::fromUtf8("parkinglot1"));
        parkinglot1->setGeometry(QRect(150, 70, 57, 38));
        parkinglot1->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(\"D:/QT/program/parkinglot/parkinglot.png\");\n"
"font:20px bold;\n"
"}"));
        parkinglot1->setAlignment(Qt::AlignCenter);
        queue5 = new QLabel(frame);
        queue5->setObjectName(QString::fromUtf8("queue5"));
        queue5->setGeometry(QRect(40, 320, 57, 38));
        queue5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(\"D:/QT/program/parkinglot/parkinglot.png\");\n"
"font:20px bold;\n"
"}"));
        queue5->setAlignment(Qt::AlignCenter);
        queue4 = new QLabel(frame);
        queue4->setObjectName(QString::fromUtf8("queue4"));
        queue4->setGeometry(QRect(40, 280, 57, 38));
        queue4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(\"D:/QT/program/parkinglot/parkinglot.png\");\n"
"font:20px bold;\n"
"}"));
        queue4->setAlignment(Qt::AlignCenter);
        queue3 = new QLabel(frame);
        queue3->setObjectName(QString::fromUtf8("queue3"));
        queue3->setGeometry(QRect(40, 240, 57, 38));
        queue3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(\"D:/QT/program/parkinglot/parkinglot.png\");\n"
"font:20px bold;\n"
"}"));
        queue3->setAlignment(Qt::AlignCenter);
        queue2 = new QLabel(frame);
        queue2->setObjectName(QString::fromUtf8("queue2"));
        queue2->setGeometry(QRect(40, 200, 57, 38));
        queue2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(\"D:/QT/program/parkinglot/parkinglot.png\");\n"
"font:20px bold;\n"
"}"));
        queue2->setAlignment(Qt::AlignCenter);
        parkinglot8 = new QLabel(frame);
        parkinglot8->setObjectName(QString::fromUtf8("parkinglot8"));
        parkinglot8->setGeometry(QRect(270, 110, 57, 38));
        parkinglot8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(\"D:/QT/program/parkinglot/parkinglot.png\");\n"
"font:20px bold;\n"
"}"));
        parkinglot8->setAlignment(Qt::AlignCenter);
        parkinglot9 = new QLabel(frame);
        parkinglot9->setObjectName(QString::fromUtf8("parkinglot9"));
        parkinglot9->setGeometry(QRect(330, 110, 57, 38));
        parkinglot9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(\"D:/QT/program/parkinglot/parkinglot.png\");\n"
"font:20px bold;\n"
"}"));
        parkinglot9->setAlignment(Qt::AlignCenter);
        parkinglot10 = new QLabel(frame);
        parkinglot10->setObjectName(QString::fromUtf8("parkinglot10"));
        parkinglot10->setGeometry(QRect(390, 110, 57, 38));
        parkinglot10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(\"D:/QT/program/parkinglot/parkinglot.png\");\n"
"font:20px bold;\n"
"}"));
        parkinglot10->setAlignment(Qt::AlignCenter);
        inputlabel = new QLabel(frame);
        inputlabel->setObjectName(QString::fromUtf8("inputlabel"));
        inputlabel->setGeometry(QRect(30, 390, 111, 31));
        inputlabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 2px solid \357\274\233\n"
"font:bold italic 16px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        enterbutton = new QPushButton(frame);
        enterbutton->setObjectName(QString::fromUtf8("enterbutton"));
        enterbutton->setGeometry(QRect(30, 440, 111, 41));
        outbutton = new QPushButton(frame);
        outbutton->setObjectName(QString::fromUtf8("outbutton"));
        outbutton->setGeometry(QRect(30, 490, 111, 41));
        checkbutton = new QPushButton(frame);
        checkbutton->setObjectName(QString::fromUtf8("checkbutton"));
        checkbutton->setGeometry(QRect(30, 540, 111, 41));
        inputnum = new QLineEdit(frame);
        inputnum->setObjectName(QString::fromUtf8("inputnum"));
        inputnum->setGeometry(QRect(170, 395, 113, 21));
        scrollArea = new QScrollArea(frame);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(510, 120, 281, 411));
        scrollArea->setMaximumSize(QSize(16777215, 16777215));
        scrollArea->setContextMenuPolicy(Qt::DefaultContextMenu);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 400, 500000));
        scrollAreaWidgetContents->setMinimumSize(QSize(400, 500000));
        showmessage = new QLabel(scrollAreaWidgetContents);
        showmessage->setObjectName(QString::fromUtf8("showmessage"));
        showmessage->setGeometry(QRect(0, 0, 600, 1000000));
        showmessage->setMinimumSize(QSize(300, 500000));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        showmessage->setFont(font);
        showmessage->setCursor(QCursor(Qt::ArrowCursor));
        showmessage->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border-color: rgb(85, 255, 255);\n"
"border: 2px solid ;\n"
"font:bold italic 16px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        showmessage->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        showmessage->setWordWrap(true);
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1133, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        queue1->setText(QApplication::translate("MainWindow", "1", nullptr));
        controllabel->setText(QApplication::translate("MainWindow", "\346\216\247\345\210\266\345\217\260", nullptr));
        parkinglot7->setText(QApplication::translate("MainWindow", "7", nullptr));
        parkinglot6->setText(QApplication::translate("MainWindow", "6", nullptr));
        parkinglot5->setText(QApplication::translate("MainWindow", "5", nullptr));
        parkinglot4->setText(QApplication::translate("MainWindow", "4", nullptr));
        parkinglot3->setText(QApplication::translate("MainWindow", "3", nullptr));
        parkinglot2->setText(QApplication::translate("MainWindow", "2", nullptr));
        parkinglot1->setText(QApplication::translate("MainWindow", "1", nullptr));
        queue5->setText(QApplication::translate("MainWindow", "5", nullptr));
        queue4->setText(QApplication::translate("MainWindow", "4", nullptr));
        queue3->setText(QApplication::translate("MainWindow", "3", nullptr));
        queue2->setText(QApplication::translate("MainWindow", "2", nullptr));
        parkinglot8->setText(QApplication::translate("MainWindow", "8", nullptr));
        parkinglot9->setText(QApplication::translate("MainWindow", "9", nullptr));
        parkinglot10->setText(QApplication::translate("MainWindow", "10", nullptr));
        inputlabel->setText(QApplication::translate("MainWindow", " \350\257\267\350\276\223\345\205\245\350\275\246\347\211\214\345\217\267", nullptr));
        enterbutton->setText(QApplication::translate("MainWindow", "\350\275\246\350\276\206\350\277\233\345\205\245", nullptr));
        outbutton->setText(QApplication::translate("MainWindow", "\350\275\246\350\276\206\351\200\200\345\207\272", nullptr));
        checkbutton->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242\344\277\241\346\201\257", nullptr));
        showmessage->setText(QApplication::translate("MainWindow", "\346\255\244\346\227\266\345\201\234\350\275\246\345\234\272\344\270\272\347\251\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
