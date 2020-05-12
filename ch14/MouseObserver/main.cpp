#include <QtWidgets>
#include <MouseObserver.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MouseObserver wgt;

    wgt.resize(250, 130);
    wgt.show();

    return a.exec();
}
