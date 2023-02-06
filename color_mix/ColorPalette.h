//
// Created by Mohamed Amine  Bellil on 02.02.23.
//

#ifndef COLOR_MIX_COLORPALETTE_H
#define COLOR_MIX_COLORPALETTE_H

#include <QtWidgets>
#include <iostream>

class ColorPalette : public QWidget{
    Q_OBJECT;
private:
    QSlider  r_slider;
    QSlider  g_slider;
    QSlider  b_slider;

    QWidget  area;
    QPalette  pal;
    QColor col;

    QFormLayout hex_col;
    QLineEdit col_value;






    QHBoxLayout  hlayout;
    QVBoxLayout  vlayout;


public:
    explicit ColorPalette();
private slots:
    void change_col();
};


#endif //COLOR_MIX_COLORPALETTE_H
