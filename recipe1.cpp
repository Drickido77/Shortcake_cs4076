#include "recipe1.h"
#include "ui_recipe1.h"

recipe1::recipe1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::recipe1)
{
    ui->setupUi(this);
}

recipe1::~recipe1()
{
    delete ui;
}
