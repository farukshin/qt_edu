#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget wgt;

    QPushButton* pcmdA = new QPushButton("A");
    QPushButton* pcmdB = new QPushButton("B");
    QPushButton* pcmdC = new QPushButton("C");
    QPushButton* pcmdD = new QPushButton("D");

    QGridLayout* pgrdLayout = new QGridLayout;
    pgrdLayout->setContentsMargins(5, 5, 5, 5);
    pgrdLayout->setSpacing(15);
    pgrdLayout->addWidget(pcmdA, 0, 0);
    pgrdLayout->addWidget(pcmdB, 0, 1);
    pgrdLayout->addWidget(pcmdC, 1, 0);
    pgrdLayout->addWidget(pcmdD, 1, 1);

    wgt.setLayout(pgrdLayout);

    wgt.show();

    return a.exec();
}
