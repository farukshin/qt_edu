#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget wgt;
    QLabel* plblNane = new QLabel("&Name:");
    QLineEdit* ptxtName = new QLineEdit;
    plblNane->setBuddy(ptxtName);

    QLabel* plblAge = new QLabel("&Age:");
    QSpinBox* pspnAge = new QSpinBox;
    plblAge->setBuddy(pspnAge);

    QVBoxLayout* pvbxLayout = new QVBoxLayout;
    pvbxLayout->addWidget(plblNane);
    pvbxLayout->addWidget(ptxtName);
    pvbxLayout->addWidget(plblAge);
    pvbxLayout->addWidget(pspnAge);
    wgt.setLayout(pvbxLayout);
    wgt.show();

    return a.exec();
}

