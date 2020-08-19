#include <QApplication>
#include "MyApplication.h"

int main(int argc, char** argv)
{
    QApplication  app(argc, argv);
    MyApplication myApplication;

    myApplication.show();

    return app.exec();
}
