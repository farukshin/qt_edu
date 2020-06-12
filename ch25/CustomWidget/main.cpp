#include <QtWidgets>
#include "CustomWidget.h"

int main(int argc, char **argv)
{
    QApplication a(argc, argv);
    QWidget wgt;

    CustomWidget *pcw = new CustomWidget;
    QScrollBar *phsb = new QScrollBar(Qt::Horizontal);

    phsb->setRange(0, 100);

    QObject::connect(phsb, SIGNAL(valueChanged(int)),
                     pcw, SLOT(slotSetProgress(int)));

    QVBoxLayout *pvbxLayout = new QVBoxLayout;
    pvbxLayout->addWidget(pcw);
    pvbxLayout->addWidget(phsb);
    wgt.setLayout(pvbxLayout);

    wgt.show();

    return a.exec();
}
