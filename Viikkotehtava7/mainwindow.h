#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QMediaPlayer>
#include <QAudioOutput>

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

private slots:

    void on_num_1_clicked();

    void on_num_2_clicked();

    void on_num_3_clicked();

    void on_num_4_clicked();

    void on_num_5_clicked();

    void on_num_6_clicked();

    void on_num_7_clicked();

    void on_num_8_clicked();

    void on_num_9_clicked();

    void on_num_0_clicked();

    void on_sum_b_clicked();

    void on_sub_b_clicked();

    void on_div_b_clicked();

    void on_mul_b_clicked();

    void on_clear_clicked();

    void on_enter_clicked();

private:
    Ui::MainWindow *ui;

    int state = 1;
    int clearing = 0;

    void numberClickHander(int);

    QMediaPlayer *clickSoundPlayer;
    QAudioOutput *clickAudioOutput;

    QMediaPlayer *errorSoundPlayer;
    QAudioOutput *errorAudioOutput;

    QMediaPlayer *resultSoundPlayer;
    QAudioOutput *resultAudioOutput;

    void setupClickSound();
    void buttonClickSound();
    void errorSound();
    void resultSound();


};
#endif // MAINWINDOW_H
