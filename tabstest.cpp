#include "tabstest.h"
#include "ui_tabstest.h"

tabstest::tabstest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tabstest)
{
    ui->setupUi(this);
}

tabstest::~tabstest()
{
    delete ui;
}
