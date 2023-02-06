//
// Created by Mohamed Amine  Bellil on 02.02.23.
//

#include "ColorPalette.h"
#include <strstream>
ColorPalette::ColorPalette() :
QWidget(nullptr),r_slider(Qt::Orientation::Vertical),g_slider(Qt::Orientation::Vertical),
b_slider(Qt::Orientation::Vertical),hlayout(),vlayout(this),area(),pal(),col(0,0,0),hex_col(),
col_value("#000000"){
    setWindowTitle("Color Palette");


    r_slider.setMaximum(255);
    r_slider.setMinimum(0);

    g_slider.setMaximum(255);
    g_slider.setMinimum(0);

    b_slider.setMaximum(255);
    b_slider.setMinimum(0);

    pal.setColor(QPalette::Window,col);
    area.setMinimumSize(200,200);
    //area.setStyleSheet("border-radius : 2px");
    area.setAutoFillBackground(true);
    area.setPalette(pal);

    hex_col.addRow(tr("Current_Col"),&col_value);
    col_value.setReadOnly(true);



    hlayout.addWidget(&area);
    hlayout.addWidget(&r_slider);
    hlayout.addWidget(&g_slider);
    hlayout.addWidget(&b_slider);
    vlayout.addLayout(&hlayout);
    vlayout.addLayout(&hex_col);




    QObject::connect(&r_slider,&QSlider::valueChanged,this,&ColorPalette::change_col);
    QObject::connect(&g_slider,&QSlider::valueChanged,this,&ColorPalette::change_col);
    QObject::connect(&b_slider,&QSlider::valueChanged,this,&ColorPalette::change_col);

};

void ColorPalette::change_col() {
        QSlider * slider = qobject_cast<QSlider*>(sender());

        if(slider == &r_slider)
            col.setRed(slider->value());
        if(slider == &g_slider)
            col.setGreen(slider->value());
        if(slider == &b_slider)
            col.setBlue(slider->value());

        pal.setColor(QPalette::Window,col);
        area.setPalette(pal);
        std::strstream  s;
        s << "#" << std::hex << std::setw(2) << std::setfill('0')  << col.red() << col.green() << col.blue();
        std::cout << s.rdbuf()->str();
        col_value.setText(s.str());
        std::cout << slider->value() << std::endl;
}
