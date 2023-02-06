#include <QApplication>
#include "ColorPalette.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    ColorPalette col;
    col.show();
    return QApplication::exec();
}
