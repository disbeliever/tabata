#include <QObject>
#include <QTimer>
#include <QList>

class Task
{
public:
  Task(QString content);
  ~Task();
  QString getContent();
private:
  QString content;
};

class Pomodoro
{
public:
  Pomodoro();
  ~Pomodoro();
  void addTask(Task& task);
private:
  QList<Task> *tasks;
  QTimer *timer;
};
