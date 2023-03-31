#include "page2.h"
#include "ui_page2.h"


Page2::Page2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Page2)
{
    ui->setupUi(this);
    //so this is where i allowed for the text edit to be un-editable
    ui->textEdit->setReadOnly(true);
}

Page2::~Page2()
{
    delete ui;
}
//gives the combo box the ability to open different recipes
/*void Page2::on_push_button(){

    ui -> textEdit -> setText("Hi");

}*/

void Page2::on_comboBox_currentIndexChanged(int index)
{
    ui -> textEdit -> setText("ingredients");

    switch(index){
    case 0:
        ui -> textEdit -> setText(" CUPCAKE RECIPE : \n 2 cups of  caster sugar \n bowl of flour \n cooking chocolate \n half a table spoon of vailla extract \n 2 eggs \n Calories: \n 111kcal of sugar \n 444kcal of chocolate \n 245kcal"
                                  )
                                ;
        break;
    case 1:
        ui -> textEdit -> setText("BOLOGNSE AND SPAGHETTI(IK ITS NOT REALLY SAVOURY) \n mince 554kcal(alot of mince) \n dolmio sauce \ pasta(tortellini \n chicken stock \n  onions \n CALORIES: \n 234kcal of dolmio \n 423kcal of pasta \ 169kcal of onion" );
        break;
    case 2:
        ui -> textEdit -> setText("Queen's Fav: \n cucumber \n two slices of bread \n tada! \n Calories: prob 5kcal at most");

        break;
    default:
        ui -> textEdit -> setText("");
        break;
    }
}

