#include "recipe.h"
#include "ui_recipe.h"

recipe::recipe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::recipe)
{
    ui->setupUi(this);
}

recipe::~recipe()
{
    delete ui;
}
