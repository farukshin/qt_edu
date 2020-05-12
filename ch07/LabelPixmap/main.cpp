#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap pix;
    pix.load(":/mira.jpg");

    QLabel lbl;
    lbl.resize(pix.size());
    lbl.setPixmap(pix);
    lbl.show();

    return a.exec();
}

