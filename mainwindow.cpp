#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->checkBox->setChecked(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if(ui->checkBox->isChecked()){
        QMessageBox::information(this,"212218104169_Swetaa","Yes user like Apples");
    }
    else{
        QMessageBox::information(this,"212218104169_Swetaa","No user don't like Apples");
    }
}


void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {
        QMessageBox::information(this,"212218104169_Swetaa","Yes user like Apples");
    }
    else
    {
        QMessageBox::information(this,"212218104169_Swetaa","No user don't like Apples");
    }
    }

