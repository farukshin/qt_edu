#include <QApplication>
#include "Buttons.h"

int main (int argc, char** argv)
{
    QApplication a(argc, argv);

    Buttons buttons;
    buttons.show();

    return a.exec();
}
