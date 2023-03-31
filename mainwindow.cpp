#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}







void MainWindow::on_pushButton_clicked()
{
    ui -> label -> setText ("Welcome to shortcake recipes");
}


void MainWindow::on_checkBox_clicked()
{
    ui -> textEdit -> setText ("Calculates the users calorie intake.");
}


void MainWindow::on_checkBox_2_clicked()
{
    ui -> textEdit_2 -> setText ("Example Recipes");
}


void MainWindow::on_radioButton_clicked()
{
    pg = new Page2(this);
        pg->show();
        //hide();
}


void MainWindow::on_radioButton_2_clicked()
{
    rp = new recipe1(this);
        rp->show();
        //hide();
}


void MainWindow::on_radioButton_3_clicked()
{
    sv = new saver(this);
        sv ->show();
        //hide();
}

