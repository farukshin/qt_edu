#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget      wgt;

    QPushButton* pcmdNormal = new QPushButton("&Normal Button");
    QPushButton* pcmdToggle = new QPushButton("&Toggle Button");
    pcmdToggle->setCheckable(true);
    pcmdToggle->setChecked(true);

    QPushButton* pcmdFlat = new QPushButton("&Flat Button");
    pcmdFlat->setFlat(true);

    QPixmap pix(":/ChordsMaestro.png");
    QPushButton* pcmdPix = new QPushButton ("&Pixmap Button");
    pcmdPix->setIcon(pix);
    pcmdPix->setIconSize(pix.size());

    QVBoxLayout* pvbxLayout = new QVBoxLayout;
    pvbxLayout->addWidget(pcmdNormal);
    pvbxLayout->addWidget(pcmdToggle);
    pvbxLayout->addWidget(pcmdFlat);
    pvbxLayout->addWidget(pcmdPix);

    wgt.setLayout(pvbxLayout);
    wgt.show();

    return a.exec();
}

