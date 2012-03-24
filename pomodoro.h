#include <QObject>
#include <QTimer>
#include <QList>

class Task : public QObject
{
  Q_OBJECT
    public:
  Task(QString content, QObject *parent = 0);
  ~Task();
  QString getContent();
 private:
  QString content;
};

class Pomodoro : public QObject
{
  Q_OBJECT
    public:
  Pomodoro(QObject *parent = 0);
  ~Pomodoro();
  void addTask(Task *task);
 private:
  //QStringList *tasks;
  QList<Task> *tasks;
  QTimer *timer;
};
