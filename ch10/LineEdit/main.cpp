#include <QtWidgets>

int main (int argc, char** argv)
{
    QApplication a(argc, argv);

    QWidget wgt;

    QLabel* plblDisplay = new QLabel;
    plblDisplay->setFrameStyle(QFrame::Box | QFrame::Raised);
    plblDisplay->setLineWidth(2);
    plblDisplay->setFixedHeight(50);

    QLabel* plblText = new QLabel("&Text");
    QLineEdit* ptx = new QLineEdit;
    plblText->setBuddy(ptx);

    QObject::connect(ptx, SIGNAL(textChanged(const QString&)),
                     plblText, SLOT(setText(const QString&)));

    QLabel* plblPasswd = new QLabel("&Password");
    QLineEdit* ptxPasswd = new QLineEdit;
    plblPasswd->setBuddy(ptxPasswd);
    ptxPasswd->setEchoMode(QLineEdit::Password);
    QObject::connect(ptxPasswd, SIGNAL(textChanged(const QString&)),
                     plblDisplay, SLOT(setText(const QString&)));

    QVBoxLayout* pvbxLayout = new QVBoxLayout;
    pvbxLayout->addWidget(plblDisplay);
    pvbxLayout->addWidget(plblText);
    pvbxLayout->addWidget(ptx);
    pvbxLayout->addWidget(plblPasswd);
    pvbxLayout->addWidget(ptxPasswd);


    wgt.setLayout(pvbxLayout);
    wgt.show();

    return a.exec();
}
