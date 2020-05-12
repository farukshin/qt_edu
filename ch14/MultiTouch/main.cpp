#include <QtWidgets>
#include "MultiTouchWidget.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    MultiTouchWidget wgt;

    wgt.resize(640, 480);
    wgt.show();

    return app.exec();
}
