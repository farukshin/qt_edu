#include <QtWidgets>

int main (int argc, char** argv)
{
    QApplication a(argc, argv);

    QWidget wgt;
    QSlider* psld = new QSlider(Qt::Horizontal);
    QLabel* plbl = new QLabel("3");

    psld->setRange(0, 9);
    psld->setPageStep(2);
    psld->setValue(3);
    psld->setTickInterval(2);
    psld->setTickPosition(QSlider::TicksBelow);

    QObject::connect(psld, SIGNAL(valueChanged(int)),
                     plbl, SLOT(setNum(int)));

    QHBoxLayout* pvbxLayout = new QHBoxLayout;
    pvbxLayout->addWidget(psld);
    pvbxLayout->addWidget(plbl);

    wgt.setLayout(pvbxLayout);
    wgt.show();

    return a.exec();
}
