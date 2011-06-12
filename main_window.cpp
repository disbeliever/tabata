#include <QtGui>

#include "main_window.h"
#include "pomodoro.h"

MainWindow::MainWindow (QWidget *parent) : QMainWindow(parent) {
  ui.setupUi(this);
  timer = new QTimer(this);
  restTimer = new QTimer(this);
  connect(ui.startButton, SIGNAL(clicked()), SLOT(timerStart()));
  connect(restTimer, SIGNAL(timeout()), this, SLOT(restEvent()));
  connect(timer, SIGNAL(timeout()), this, SLOT(paintEvent()));

  connect(ui.pomodoroAddButton, SIGNAL(clicked()), this, SLOT(pomodoroAddTask()));
  running = false;
}

MainWindow::~MainWindow() {

}

void MainWindow::pomodoroAddTask() {
  
}

void MainWindow::timerStart() {
  if (running == true) {
    timer->stop();
    restTimer->stop();
    this->setStyleSheet("background-color: gray;");
    running = false;
    ui.startButton->setText("Start");
    return;
  }
  activeTime = ui.spinBoxInterval->value();
  restTime = ui.spinBoxPause->value();
  running = true;
  active = true;

  time.setHMS(0,0,0);
  updateTimer(ui.timerLabel);
  timer->start(1000);
  ui.startButton->setText("Stop");
  this->setStyleSheet("background-color: red;");
  restTimer->start(activeTime*1000);
}

void MainWindow::paintEvent() {
  time = time.addSecs(1);
  updateTimer(ui.timerLabel);
}

void MainWindow::updateTimer(QLabel *label) {
  label->setText(time.toString("m:ss"));
}

void MainWindow::restEvent() {
  if (active == true) {
    this->setStyleSheet("background-color: green;");
    restTimer->start(restTime*1000);
    active = false;
  }
  else {
    this->setStyleSheet("background-color: red;");
    restTimer->start(activeTime*1000);
    active = true;
  }
}
