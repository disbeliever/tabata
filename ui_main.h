/********************************************************************************
** Form generated from reading UI file 'main.ui'
**
** Created: Wed Feb 22 19:29:32 2012
**      by: Qt User Interface Compiler version 4.7.4
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
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTimeEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRenameTask;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tabTabata;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *timerLabel;
    QTimeEdit *timeEdit;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBoxInterval;
    QSpinBox *spinBoxPause;
    QPushButton *startButton;
    QWidget *tabPomodoro;
    QVBoxLayout *verticalLayout_2;
    QProgressBar *progressBar;
    QListWidget *listWidget;
    QPushButton *pomodoroAddButton;
    QPushButton *pomodoroStartButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(309, 307);
        actionRenameTask = new QAction(MainWindow);
        actionRenameTask->setObjectName(QString::fromUtf8("actionRenameTask"));
        actionRenameTask->setCheckable(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 294, 289));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setTabPosition(QTabWidget::West);
        tabTabata = new QWidget();
        tabTabata->setObjectName(QString::fromUtf8("tabTabata"));
        horizontalLayout_2 = new QHBoxLayout(tabTabata);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        timerLabel = new QLabel(tabTabata);
        timerLabel->setObjectName(QString::fromUtf8("timerLabel"));
        QFont font;
        font.setPointSize(30);
        timerLabel->setFont(font);
        timerLabel->setAlignment(Qt::AlignCenter);
        timerLabel->setMargin(0);
        timerLabel->setIndent(-1);

        verticalLayout->addWidget(timerLabel);

        timeEdit = new QTimeEdit(tabTabata);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setTime(QTime(0, 4, 0));

        verticalLayout->addWidget(timeEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinBoxInterval = new QSpinBox(tabTabata);
        spinBoxInterval->setObjectName(QString::fromUtf8("spinBoxInterval"));
        spinBoxInterval->setValue(20);

        horizontalLayout->addWidget(spinBoxInterval);

        spinBoxPause = new QSpinBox(tabTabata);
        spinBoxPause->setObjectName(QString::fromUtf8("spinBoxPause"));
        spinBoxPause->setValue(10);

        horizontalLayout->addWidget(spinBoxPause);

        startButton = new QPushButton(tabTabata);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setFlat(false);

        horizontalLayout->addWidget(startButton);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        tabWidget->addTab(tabTabata, QString());
        tabPomodoro = new QWidget();
        tabPomodoro->setObjectName(QString::fromUtf8("tabPomodoro"));
        verticalLayout_2 = new QVBoxLayout(tabPomodoro);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        progressBar = new QProgressBar(tabPomodoro);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout_2->addWidget(progressBar);

        listWidget = new QListWidget(tabPomodoro);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_2->addWidget(listWidget);

        pomodoroAddButton = new QPushButton(tabPomodoro);
        pomodoroAddButton->setObjectName(QString::fromUtf8("pomodoroAddButton"));

        verticalLayout_2->addWidget(pomodoroAddButton);

        pomodoroStartButton = new QPushButton(tabPomodoro);
        pomodoroStartButton->setObjectName(QString::fromUtf8("pomodoroStartButton"));

        verticalLayout_2->addWidget(pomodoroStartButton);

        tabWidget->addTab(tabPomodoro, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Tabata", 0, QApplication::UnicodeUTF8));
        actionRenameTask->setText(QApplication::translate("MainWindow", "Rename", 0, QApplication::UnicodeUTF8));
        actionRenameTask->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", 0, QApplication::UnicodeUTF8));
        timerLabel->setText(QApplication::translate("MainWindow", "0:00", 0, QApplication::UnicodeUTF8));
        timeEdit->setDisplayFormat(QApplication::translate("MainWindow", "mm:ss", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinBoxInterval->setToolTip(QApplication::translate("MainWindow", "Time to do exercise, seconds", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        spinBoxPause->setToolTip(QApplication::translate("MainWindow", "Time to rest, seconds", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        startButton->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabTabata), QApplication::translate("MainWindow", "Tabata", 0, QApplication::UnicodeUTF8));
        pomodoroAddButton->setText(QApplication::translate("MainWindow", "Add task", 0, QApplication::UnicodeUTF8));
        pomodoroStartButton->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabPomodoro), QApplication::translate("MainWindow", "Pomodoro", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_H
