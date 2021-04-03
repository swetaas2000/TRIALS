#include "mainwindow1trials.h"
#include "ui_mainwindow1trials.h"
#include<QTextStream>
MainWindow1TRIALS::MainWindow1TRIALS(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow1TRIALS)
{
    ui->setupUi(this);
    connect(ui->chkbx_1,SIGNAL(clicked(bool)),this,SLOT(onchkbx_clicked()));
    connect(ui->chkbx_2,SIGNAL(clicked(bool)),this,SLOT(onchkbx_clicked()));
    connect(ui->chkbx_3,SIGNAL(clicked(bool)),this,SLOT(onchkbx_clicked()));

}

MainWindow1TRIALS::~MainWindow1TRIALS()
{
    delete ui;
}


void MainWindow1TRIALS::onchkbx_clicked(){
    QTextStream stream(stdout);
    if(ui->chkbx_1->isChecked())
    {
        stream<<"\n\nOption 1 is Checked";
    }
    else{
        stream<<"\nOption 1 is UnChecked";
    }
    if(ui->chkbx_2->isChecked())
    {
        stream<<"\nOption 2 is Checked";
    }
    else{
        stream<<"\nOption 2 is UnChecked";
    }if(ui->chkbx_3->isChecked())
    {
        stream<<"\nOption 3 is Checked";
    }
    else{
        stream<<"\nOption 3 is UnChecked";
    }

}
