#include "widget.h"
#include "./ui_widget.h"

#include <iostream>
#include <map>
using namespace std;

map <QCheckBox*, bool>checkboox;

// Parentheses = ()
// Curly {}
// Square []
// Angled/Crocodile <>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    checkboox.insert({ui->a,false});
    checkboox.insert({ui->c,false});
    checkboox.insert({ui->v,false});
}

Widget::~Widget()
{
    delete ui;
}



void Widget::on_GayMan_clicked()
{
    map<QCheckBox*, bool>:: iterator t;

    for(t = checkboox.begin(); t != checkboox.end(); t++){

       if(t->first->isChecked()){
           t->second = true;
       }else{
           t->second = false;
       }
       cout << "Key : " << t->first->objectName().QString::toStdString() << " Value : " << t->second << endl;
    }
}

