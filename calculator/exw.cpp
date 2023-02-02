//
// Created by Mohamed Amine  Bellil on 02.02.23.
//

#include "exw.h"

exw::exw():QWidget(nullptr), equal(nullptr), op1(nullptr),op2(nullptr),result(nullptr),ops(nullptr),layout(this),current_op(add){
    setWindowTitle("Hellow Its me");
    setBaseSize(QSize(500,500));
    equal = new QPushButton("=");
    op1 = new QLineEdit("0");
    op2 = new QLineEdit("0");
    ops = new QComboBox();

    ops->addItem("+");
    ops->addItem("-");
    ops->addItem("*");
    ops->addItem("/");

    result = new QLineEdit("0");
    layout.addWidget(op1,0,0,1,2);
    layout.addWidget(ops,0,2);
    layout.addWidget(op2,0,3,1,2);
    layout.addWidget(equal,0,5);
    layout.addWidget(result,0,6,1,3);
    QObject::connect(equal,SIGNAL(clicked()),this,SLOT(set_result()));
    QObject::connect(ops,SIGNAL(currentIndexChanged(int)),this,SLOT(set_operation(int)));

}

void exw::set_result(){
    float sresult  = 0.0f;
    switch (current_op) {
        case add : sresult = op1->text().toFloat() + op2->text().toFloat(); break;
        case sub :sresult =  op1->text().toFloat() - op2->text().toFloat(); break;
        case mul : sresult = op1->text().toFloat() * op2->text().toFloat(); break;
        case div : sresult = op1->text().toFloat() / op2->text().toFloat(); break;
    }
    result->setText(QString::number(sresult));
    op1->clear();
    op2->clear();
}

void exw::set_operation(int value){
    current_op = (enum op)value;
    switch (current_op) {
        case add : std::cout << "now we are adding\n"; break;
        case sub : std::cout << "now we are substracting\n"; break;
        case mul : std::cout << "now we are multiplying\n"; break;
        case div : std::cout << "now we are dividing\n"; break;
    }
}

