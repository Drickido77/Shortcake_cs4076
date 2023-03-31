#include "saver.h"
#include "ui_saver.h"

saver::saver(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::saver)
{
    ui->setupUi(this);
}

saver::~saver()
{
    delete ui;
}
