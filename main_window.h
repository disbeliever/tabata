#ifndef _MAIN_WINDOW_H_
#define _MAIN_WINDOW_H_

#include <QMainWindow>
#include <QtGui>
#include "ui_main.h"

class MainWindow : public QMainWindow
{
  Q_OBJECT
    public:
  MainWindow(QWidget *parent = 0);
  ~MainWindow();
 private:
  Ui::MainWindow ui;
  QTimer *timer;
  QTimer *restTimer;
  QTime time;
  bool running;
  bool active;
  int restTime;
  int activeTime;

  private slots:
  void timerStart();
  //void activeEvent();
  void restEvent();
  void paintEvent();
  void updateTimer(QLabel *label);
  //  void update();
};

#endif /* _MAIN_WINDOW_H_ */
