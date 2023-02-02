#include <QApplication>
#include <QWindow>

#include "exw.h"

int main(int argc, char *argv[]) {
    QApplication myapp(argc, argv);
    exw w;
    w.show();
    return myapp.exec();
}
