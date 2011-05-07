/********************************************************************************
** Form generated from reading UI file 'main.ui'
**
** Created: Sat May 7 18:04:23 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_H
#define UI_MAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTimeEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *timerLabel;
    QTimeEdit *timeEdit;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBoxInterval;
    QSpinBox *spinBoxPause;
    QPushButton *startButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(195, 128);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 9, 191, 116));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        timerLabel = new QLabel(verticalLayoutWidget);
        timerLabel->setObjectName(QString::fromUtf8("timerLabel"));
        QFont font;
        font.setPointSize(25);
        timerLabel->setFont(font);
        timerLabel->setAlignment(Qt::AlignCenter);
        timerLabel->setMargin(0);
        timerLabel->setIndent(-1);

        verticalLayout->addWidget(timerLabel);

        timeEdit = new QTimeEdit(verticalLayoutWidget);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setTime(QTime(0, 4, 0));

        verticalLayout->addWidget(timeEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinBoxInterval = new QSpinBox(verticalLayoutWidget);
        spinBoxInterval->setObjectName(QString::fromUtf8("spinBoxInterval"));

        horizontalLayout->addWidget(spinBoxInterval);

        spinBoxPause = new QSpinBox(verticalLayoutWidget);
        spinBoxPause->setObjectName(QString::fromUtf8("spinBoxPause"));

        horizontalLayout->addWidget(spinBoxPause);

        startButton = new QPushButton(verticalLayoutWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setFlat(false);

        horizontalLayout->addWidget(startButton);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(startButton, SIGNAL(clicked()), timerLabel, SLOT(clear()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        timerLabel->setText(QApplication::translate("MainWindow", "0:00", 0, QApplication::UnicodeUTF8));
        timeEdit->setDisplayFormat(QApplication::translate("MainWindow", "mm:ss", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_H
