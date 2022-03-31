#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, [=]{
        switch (ui->comboBox->currentIndex())
        {
        case 0:
            ui->label_2->setText(QString::number(ui->lineEdit->text().toDouble() + ui->lineEdit_2->text().toDouble()));
            return 0;
        case 1:
            ui->label_2->setText(QString::number(ui->lineEdit->text().toDouble() - ui->lineEdit_2->text().toDouble()));
            return 0;
        case 2:
            ui->label_2->setText(QString::number(ui->lineEdit->text().toDouble() * ui->lineEdit_2->text().toDouble()));
            return 0;
        case 3:
            ui->label_2->setText(QString::number(ui->lineEdit->text().toDouble() / ui->lineEdit_2->text().toDouble()));
        default:
            break;
        }
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
