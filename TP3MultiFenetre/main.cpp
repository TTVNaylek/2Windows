#include "fenetremere.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FenetreMere w;
    w.show();

    return a.exec();
}
