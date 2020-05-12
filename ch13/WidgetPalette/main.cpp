#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSpinBox spb;

    QPalette pal = spb.palette();
    pal.setBrush(QPalette::Button, QBrush(Qt::red, Qt::Dense3Pattern));
    pal.setColor(QPalette::ButtonText, Qt::blue);
    pal.setColor(QPalette::Text, Qt::magenta);
    pal.setColor(QPalette::Active, QPalette::Base, Qt::green);

    spb.setPalette(pal);
    spb.resize(150, 74);
    spb.show();

    a.setStyle("Windows");

    return a.exec();
}
