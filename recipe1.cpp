#include "recipe1.h"
#include "ui_recipe1.h"


//calculates calorie value
double CaloValue = 0.0;
bool addtrig = false;
bool subtrig = false;
bool divtrig = false;





recipe1::recipe1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::recipe1)
{
    ui->setupUi(this);
    ui->Display->setText(QString::number(CaloValue));
    //an array that holds a refernce to all my push buttons
    QPushButton *no_Buttons[15];
    for(int i = 0; i < 15; i++){
        QString buttonName = "Button" + QString::number(i);
        no_Buttons[i] = recipe1::findChild<QPushButton *>(buttonName);
        //for when button is released
        connect(no_Buttons[i], SIGNAL(released()), this,
                SLOT(Foods()));
    }
    connect(ui->add, SIGNAL(released()), this,
            SLOT(OperatorButtons()));
    connect(ui->subtract, SIGNAL(released()), this,
            SLOT(OperatorButtons()));
    connect(ui->divide, SIGNAL(released()), this,
            SLOT(OperatorButtons()));
    connect(ui->equal, SIGNAL(released()), this,
            SLOT(EqualButton()));
}
//automatically generated deconstructor
recipe1::~recipe1()
{
    delete ui;
}

void recipe1::Foods(){
    QPushButton *button = (QPushButton *) sender();
    QString buttonVal = button->text();
    QString displayVal = ui->Display->text();
    if((displayVal.toDouble()==0) || (displayVal.toDouble()==0.0)){
        ui->Display->setText(buttonVal);
    } else {
       // means theres alreasy a value inside there that I wanna add to it
        QString newVal = displayVal + buttonVal;
        double dblNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dblNewVal, 'g', 16));
    }
}

void recipe1::OperatorButtons(){
    addtrig = false;
    subtrig = false;
    QString displayVal = ui->Display->text();
    CaloValue = displayVal.toDouble();
    QPushButton *button = (QPushButton *)sender();
    QString buttonVal = button->text();
    if(QString::compare(buttonVal, "+", Qt::CaseInsensitive) == 0){
        addtrig = true;
    } else if(QString::compare(buttonVal, "-", Qt::CaseInsensitive)==0) {
        subtrig = true;
    } else{
        divtrig = true;
    }
    ui->Display->setText("");
}


void recipe1::EqualButton(){
    double answer = 0.0;
    QString displayVal = ui->Display->text();
    double dblDisplay = displayVal.toDouble();
    if(addtrig || subtrig || divtrig){
        if(addtrig){
            answer = CaloValue + dblDisplay;
        } else if(subtrig) {
            answer = CaloValue - dblDisplay;
        } else {
            answer = CaloValue / dblDisplay;
        }

    }
    ui->Display->setText(QString::number(answer));
}

