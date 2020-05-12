#include <QtWidgets>

int main (int argc, char** argv)
{
    QApplication a(argc, argv);

    QSpinBox spb;
    spb.setRange(1, 100);
    spb.setSuffix(" MB");
    spb.setButtonSymbols(QSpinBox::PlusMinus);
    spb.setWrapping(true);


    spb.resize(100, 30);
    spb.show();
    QApplication::setStyle("Windows");

    return a.exec();
}
