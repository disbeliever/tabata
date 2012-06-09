#ifndef _MAIN_WINDOW_H_
#define _MAIN_WINDOW_H_

#include <QMainWindow>
#include <QtGui>
#include "ui_main.h"
#include "pomodoro.h"

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

  QProcess ps; //mplayer process
  QStringList commandAndParameters;

  bool running;
  bool active;
  int restTime;
  int activeTime;
  Pomodoro *pomodoro;

private slots:
  void timerStart();
  //void activeEvent();
  void restEvent();
  void paintEvent();
  void updateTimer(QLabel *label);
  void pomodoroAddTask(Task task);
  void pomodoroRenameTask();
  void pomodoroCreateNewTask();
  //  void update();
};

#endif /* _MAIN_WINDOW_H_ */
