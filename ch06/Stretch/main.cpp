#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget wgt;

    QPushButton* pcmdA = new QPushButton("A");
    QPushButton* pcmdB = new QPushButton("B");

    QBoxLayout* pbxLayout = new QBoxLayout(QBoxLayout::LeftToRight);
    pbxLayout->addWidget(pcmdA);
    pbxLayout->addStretch(1);
    pbxLayout->addWidget(pcmdB);

    wgt.setLayout(pbxLayout);

    wgt.resize(450, 40);
    wgt.show();

    return a.exec();
}
