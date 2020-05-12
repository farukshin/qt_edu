#include <QtWidgets>

int main (int argc, char** argv)
{
    QApplication a(argc, argv);

    QWidget wgt;
    QLCDNumber* plcd = new QLCDNumber(4);
    QScrollBar* pcrlb = new QScrollBar(Qt::Horizontal);

    QObject::connect(pcrlb, SIGNAL(valueChanged(int)),
                     plcd, SLOT(display(int)));

    QVBoxLayout* pvbxLayout = new QVBoxLayout;
    pvbxLayout->addWidget(plcd);
    pvbxLayout->addWidget(pcrlb);

    wgt.setLayout(pvbxLayout);
    wgt.resize(250, 150);
    wgt.show();

    return a.exec();
}
