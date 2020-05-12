#include <QtWidgets>

int main (int argc, char** argv)
{
    QApplication a(argc, argv);

    QWidget wgt;
    QDial* pdial = new QDial;
    QProgressBar* ppgbr = new QProgressBar;

    pdial->setRange(0, 100);
    pdial->setNotchTarget(5);
    pdial->setNotchTarget(true);

    QObject::connect(pdial, SIGNAL(valueChanged(int)),
                     ppgbr, SLOT(setValue(int)));

    QVBoxLayout* pvbxLayout = new QVBoxLayout;
    pvbxLayout->addWidget(pdial);
    pvbxLayout->addWidget(ppgbr);

    wgt.setLayout(pvbxLayout);
    wgt.resize(180, 200);
    wgt.show();

    return a.exec();
}
