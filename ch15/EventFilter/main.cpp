#include <QtWidgets>

class MouseFilter : public QObject
{
protected:
    virtual bool eventFilter(QObject* pobj, QEvent* pe)
    {
        if(pe->type() == QEvent::MouseButtonPress)
            if(static_cast<QMouseEvent*>(pe)->button() == Qt::LeftButton)
            {
                QString strClassName = pobj->metaObject()->className();
                QMessageBox::information(0, "Class name ", strClassName);
                return true;
            }
        return false;
    }

public:
    MouseFilter(QObject* pobj = 0) : QObject(pobj)
    {

    }
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QLineEdit txt("QLineEdit");
    txt.installEventFilter(new MouseFilter(&txt));
    txt.show();

    QLabel lbl("QLabel");
    lbl.installEventFilter(new MouseFilter(&lbl));
    lbl.show();

    QPushButton cmd("QPushButton");
    cmd.installEventFilter(new MouseFilter(&cmd));
    cmd.show();

    return a.exec();
}
