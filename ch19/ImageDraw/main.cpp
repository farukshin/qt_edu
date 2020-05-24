#include <QtWidgets>
#include "ImageDraw.h"

int main(int argc, char **argv)
{
    QApplication a(argc, argv);

    ImageDraw imgDraw;

    imgDraw.resize(250, 320);
    imgDraw.show();

    return a.exec();
}
