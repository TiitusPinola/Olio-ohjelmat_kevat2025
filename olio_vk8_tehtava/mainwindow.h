#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QTimer>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void timeout();

private:
    Ui::MainWindow *ui;
    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;
    QTimer *pQTimer;
    void updateProgressBar();
    void setGameInfoText(QString,short n=-1);

private slots:
    void startHandler();
    void stopHandler();
    void timerHandler();
    void timeHandler();
    void timeHandler2();

};
#endif // MAINWINDOW_H
