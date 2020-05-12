#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget wgt;

    QPushButton* pcmdA = new QPushButton("A");
    QPushButton* pcmdB = new QPushButton("B");
    QPushButton* pcmdC = new QPushButton("C");

    QHBoxLayout* phbxLayout = new QHBoxLayout;
    phbxLayout->setContentsMargins(10, 10, 10, 10);
    phbxLayout->setSpacing(20);
    phbxLayout->addWidget(pcmdA);
    phbxLayout->addWidget(pcmdB);
    phbxLayout->addWidget(pcmdC);

    wgt.setLayout(phbxLayout);

    wgt.show();

    return a.exec();
}
