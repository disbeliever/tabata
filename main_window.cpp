#include <QtGui>
#include "main_window.h"

MainWindow::MainWindow (QWidget *parent) : QMainWindow(parent) {
  ui.setupUi(this);
  timer = new QTimer(this);
  restTimer = new QTimer(this);
  connect(ui.startButton, SIGNAL(clicked()), SLOT(timerStart()));
  connect(restTimer, SIGNAL(timeout()), this, SLOT(restEvent()));
  connect(timer, SIGNAL(timeout()), this, SLOT(paintEvent()));
  running = false;
  restTime = 10;
  activeTime = 20;
}

MainWindow::~MainWindow() {

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
