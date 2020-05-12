#include <QtWidgets>

class NameValidator : public QValidator
{
public:
    NameValidator (QObject* parent): QValidator(parent)
    {

    }

    virtual State validate(QString& str, int& pos) const
    {
        QRegExp rxp = QRegExp("[0-9]");
        if(str.contains(rxp))
            return Invalid;

        return Acceptable;
    }
};

int main (int argc, char** argv)
{
    QApplication a(argc, argv);
    QWidget wgt;

    QLabel* plblText = new QLabel("&Name:");
    QLineEdit* ptx = new QLineEdit;

    NameValidator* pnmval = new NameValidator(ptx);
    ptx->setValidator(pnmval);
    plblText->setBuddy(ptx);

    QVBoxLayout* pvbxLayout = new QVBoxLayout;
    pvbxLayout->addWidget(plblText);
    pvbxLayout->addWidget(ptx);
    wgt.setLayout(pvbxLayout);
    wgt.show();

    return a.exec();
}
