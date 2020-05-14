#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QLineEdit txt("User input: ");
    txt.show();
    txt.resize(300,20);

    for (int i=0; i< Qt::Key_Z - Qt::Key_A+1;++i){
        QChar ch = 65 + i;
        int nKey = Qt::Key_A + i;
        QKeyEvent keyPress(QEvent::KeyPress,nKey, Qt::NoModifier, ch);
        QApplication::sendEvent(&txt, &keyPress);

        QKeyEvent KeyRelease(QEvent::KeyRelease,nKey, Qt::NoModifier, ch);
        QApplication::sendEvent(&txt, &KeyRelease);

    }

    return a.exec();
}
