#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QPushButton>
#include <QMainWindow>
#include<iostream>
#include "string"
#include "page2.h"
#include "recipe1.h"
#include "saver.h"
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
  void on_pushButton_clicked();

  void on_checkBox_clicked();

  void on_checkBox_2_clicked();

  void on_radioButton_clicked();

  void on_radioButton_2_clicked();

  void on_radioButton_3_clicked();

private:
    Ui::MainWindow *ui;
    QPushButton *push_button2;
    Page2 *pg;
    recipe1 *rp;
    saver *sv;
};
#endif // MAINWINDOW_H
