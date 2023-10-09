#include "OOP_Project_Qt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OOP_Project_Qt w;
    w.show();
    return a.exec();
}
