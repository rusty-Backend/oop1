#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMediaPlayer>
#include <QAudioOutput>
#include <QUrl>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Initialize warnings
    ui->stateWarning->setVisible(false);
    ui->warning->setVisible(false);
    ui->divideWarning->setVisible(false);

    //Initialize line edit boxes
    ui->Number1->setText("");
    ui->Number2->setText("");
    ui->result->setText("");

    ui->Number1->setAlignment(Qt::AlignCenter);
    ui->Number2->setAlignment(Qt::AlignCenter);
    ui->result->setAlignment(Qt::AlignCenter);

    //Initialize music
    QMediaPlayer * music = new QMediaPlayer;
    QAudioOutput * audioOutput = new QAudioOutput;

    music->setAudioOutput(audioOutput);
    music->setSource(QUrl("qrc:/res/backgroundMusic.mp3"));
    audioOutput->setVolume(50);
    music->setLoops(QMediaPlayer::Infinite);
    music->play();


    //Initialize click sound
    clickSoundPlayer = new QMediaPlayer(this);
    clickAudioOutput = new QAudioOutput(this);

    clickSoundPlayer->setAudioOutput(clickAudioOutput);
    clickSoundPlayer->setSource(QUrl("qrc:/res/clicksound.mp3"));
    clickAudioOutput->setVolume(50);
    clickSoundPlayer->setLoops(QMediaPlayer::Once);

    //Initialize error sound
    errorSoundPlayer = new QMediaPlayer(this);
    errorAudioOutput = new QAudioOutput(this);

    errorSoundPlayer->setAudioOutput(errorAudioOutput);
    errorSoundPlayer->setSource(QUrl("qrc:/res/errorSound.mp3"));
    errorAudioOutput->setVolume(50);
    errorSoundPlayer->setLoops(QMediaPlayer::Once);

    //Initialize result sound
    resultSoundPlayer = new QMediaPlayer(this);
    resultAudioOutput = new QAudioOutput(this);

    resultSoundPlayer->setAudioOutput(resultAudioOutput);
    resultSoundPlayer->setSource(QUrl("qrc:/res/resultSound.mp3"));
    resultAudioOutput->setVolume(50);
    resultSoundPlayer->setLoops(QMediaPlayer::Once);
}

//Click sound function
void MainWindow::buttonClickSound() {

    clickSoundPlayer->play();
}

//Error sound function
void MainWindow::errorSound() {

    errorSoundPlayer->play();

}

//Result sound function
void MainWindow::resultSound() {

    resultSoundPlayer->play();
}


MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::numberClickHander(int num) {


    qDebug() << "Pressed number: "
             << num;

    QString str_num = QString::number(num);

    if (state == 1) {

        QString currentNum1 = ui->Number1->text();

        currentNum1.append(str_num);

        ui->Number1->setText(currentNum1);

        qDebug() << "Number 1 set to "
                 << str_num;
    }

    else if (state == 2) {

        QString currentNum2 = ui->Number2->text();

        currentNum2.append(str_num);

        ui->Number2->setText(currentNum2);

        qDebug() << "Number 2 set to "
                 << str_num;
    }
}

void MainWindow::on_num_1_clicked()
{

    //Receive value from button text
    QString str_num = ui->num_1->text();

    //Convert button text to int
    int num = str_num.toInt();

    numberClickHander(num);

    buttonClickSound();


}


void MainWindow::on_num_2_clicked()
{
    //Receive value from button text
    QString str_num = ui->num_2->text();

    //Convert button text to int
    int num = str_num.toInt();

    numberClickHander(num);

    buttonClickSound();

}


void MainWindow::on_num_3_clicked()
{
    //Receive value from button text
    QString str_num = ui->num_3->text();

    //Convert button text to int
    int num = str_num.toInt();

    numberClickHander(num);

    buttonClickSound();

}


void MainWindow::on_num_4_clicked()
{
    //Receive value from button text
    QString str_num = ui->num_4->text();

    //Convert button text to int
    int num = str_num.toInt();

    numberClickHander(num);

    buttonClickSound();

}


void MainWindow::on_num_5_clicked()
{
    //Receive value from button text
    QString str_num = ui->num_5->text();

    //Convert button text to int
    int num = str_num.toInt();

    numberClickHander(num);

    buttonClickSound();

}


void MainWindow::on_num_6_clicked()
{
    //Receive value from button text
    QString str_num = ui->num_6->text();

    //Convert button text to int
    int num = str_num.toInt();

    numberClickHander(num);

    buttonClickSound();

}


void MainWindow::on_num_7_clicked()
{
    //Receive value from button text
    QString str_num = ui->num_7->text();

    //Convert button text to int
    int num = str_num.toInt();

    numberClickHander(num);

    buttonClickSound();

}


void MainWindow::on_num_8_clicked()
{
    //Receive value from button text
    QString str_num = ui->num_8->text();

    //Convert button text to int
    int num = str_num.toInt();

    numberClickHander(num);

    buttonClickSound();

}


void MainWindow::on_num_9_clicked()
{
    //Receive value from button text
    QString str_num = ui->num_9->text();

    //Convert button text to int
    int num = str_num.toInt();

    numberClickHander(num);

    buttonClickSound();

}


void MainWindow::on_num_0_clicked()
{
    //Receive value from button text
    QString str_num = ui->num_0->text();

    //Convert button text to int
    int num = str_num.toInt();

    numberClickHander(num);

    buttonClickSound();

}


void MainWindow::on_sum_b_clicked()
{
    if (state == 3) {

        int num1 = ui->Number1->text().toInt();
        int num2 = ui->Number2->text().toInt();

        int result = num1 + num2;

        ui->result->setText(QString::number(result));
        resultSound();
    }

    else {

        qDebug() << "State is not 3!";

        ui->stateWarning->setVisible(true);
        ui->warning->setVisible(true);
        errorSound();

    }

    buttonClickSound();

}


void MainWindow::on_sub_b_clicked()
{
    if (state == 3) {

        int num1 = ui->Number1->text().toInt();
        int num2 = ui->Number2->text().toInt();

        int result = num1 - num2;

        ui->result->setText(QString::number(result));
        resultSound();
    }

    else {

        qDebug() << "State is not 3!";

        ui->stateWarning->setVisible(true);
        ui->warning->setVisible(true);
        errorSound();
    }

    buttonClickSound();

}


void MainWindow::on_div_b_clicked()
{
    if (state == 3) {

        double num1 = ui->Number1->text().toDouble();
        double num2 = ui->Number2->text().toDouble();

        if(num2 == 0) {

            ui->divideWarning->setVisible(true);
            ui->warning->setVisible(true);
            errorSound();

            state = 2;

            ui->Number2->setText("");
        }

        else {

        float result = num1 / num2;

        ui->result->setText(QString::number(result));
        resultSound();
        }


    }

    else {

        qDebug() << "State is not 3!";

        ui->stateWarning->setVisible(true);
        ui->warning->setVisible(true);
        errorSound();

    }

    buttonClickSound();

}


void MainWindow::on_mul_b_clicked()
{

    if (state == 3) {

        int num1 = ui->Number1->text().toInt();
        int num2 = ui->Number2->text().toInt();

        int result = num1 * num2;

        ui->result->setText(QString::number(result));
        resultSound();
    }

    else {

        qDebug() << "State is not 3!";

        ui->stateWarning->setVisible(true);
        ui->warning->setVisible(true);
        errorSound();

    }

    buttonClickSound();

}


void MainWindow::on_clear_clicked()
{
    state = 1;

    ui->Number1->setText("");
    ui->Number2->setText("");
    ui->result->setText("");

    qDebug() << "Cleared!";

    ui->stateWarning->setVisible(false);
    ui->warning->setVisible(false);
    ui->divideWarning->setVisible(false);

    buttonClickSound();

}


void MainWindow::on_enter_clicked()
{
    ui->stateWarning->setVisible(false);
    ui->warning->setVisible(false);
    ui->divideWarning->setVisible(false);

    //Increase state & move to next phase
    state++;

    qDebug() << "Current state: "
             << state;

    if (state > 3) {
        //Stop overflowing
        state = 3;

        qDebug() << "Current state: "
                 << state;
    }

    buttonClickSound();

}

