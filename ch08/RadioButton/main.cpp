#include <QtWidgets>

int main(int argc, char** argv)
{
    QApplication a(argc, argv);
    QGroupBox gbx("&Colors");

    QRadioButton* pradRed   = new QRadioButton("&Red");
    QRadioButton* pradGreen = new QRadioButton("&Green");
    QRadioButton* pradBlue  = new QRadioButton("&Blue");
    pradGreen->setChecked(true);

    QVBoxLayout* pvbxLayout = new QVBoxLayout;
    pvbxLayout->addWidget(pradRed);
    pvbxLayout->addWidget(pradGreen);
    pvbxLayout->addWidget(pradBlue);
    gbx.setLayout(pvbxLayout);

    gbx.show();

    return a.exec();
}
