#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget wgt;
    QLCDNumber* plcd = new QLCDNumber;
    QSpinBox* psbn = new QSpinBox;

    plcd->setSegmentStyle(QLCDNumber::Filled);
    plcd->setMode(QLCDNumber::Hex);

    psbn->setFixedHeight(30);

    QObject::connect(psbn, SIGNAL(valueChanged(int)), plcd, SLOT(display(int)));

    QVBoxLayout* pvbxLayuot = new QVBoxLayout;
    pvbxLayuot->addWidget(plcd);
    pvbxLayuot->addWidget(psbn);
    wgt.setLayout(pvbxLayuot);
    wgt.resize(250, 150);

    wgt.show();

    return a.exec();
}

