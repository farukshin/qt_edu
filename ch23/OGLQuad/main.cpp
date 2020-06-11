#include <QApplication>
#include "OGLQuad.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    OGLQuad oglQuad;

    oglQuad.resize(200, 200);
    oglQuad.show();

    return app.exec();
}
