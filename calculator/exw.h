//
// Created by Mohamed Amine  Bellil on 02.02.23.
//

#ifndef UNTITLED3_EXW_H
#define UNTITLED3_EXW_H
#include <iostream>
#include <QApplication>
#include <QWidget>
#include <QToolButton>
#include <QLineEdit>
#include <QLabel>
#include <QGridLayout>
#include <QPushButton>
#include <QComboBox>


class exw : public QWidget{
    Q_OBJECT
public:
    QPushButton * equal;
    QLineEdit * op1;
    QLineEdit * op2;
    QLineEdit * result;
    QComboBox * ops;
    enum op {add,sub,mul,div};
    op current_op;
    QGridLayout layout;
public:
    explicit exw();
private slots:
    void set_result();
    void set_operation(int value);
};


#endif //UNTITLED3_EXW_H
