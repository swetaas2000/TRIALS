#ifndef MAINWINDOW1TRIALS_H
#define MAINWINDOW1TRIALS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow1TRIALS; }
QT_END_NAMESPACE

class MainWindow1TRIALS : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow1TRIALS(QWidget *parent = nullptr);
    ~MainWindow1TRIALS();
private slots:
    void onchkbx_clicked();
    void on_chkbx_1_stateChanged(int arg1);

    void on_chkbx_2_stateChanged(int arg1);

    void on_chkbx_3_stateChanged(int arg1);

private:
    Ui::MainWindow1TRIALS *ui;
};
#endif // MAINWINDOW1TRIALS_H
