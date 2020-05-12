#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget wgt;
    QPixmap pix(":/clock.png");
    QCursor cur(pix);

    wgt.setCursor(cur);
    wgt.resize(180, 100);
    wgt.show();


    return app.exec();
}
