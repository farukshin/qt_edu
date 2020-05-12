#include <QtWidgets>

int main (int argc, char** argv)
{
    QApplication a(argc, argv);

    QDateTimeEdit dte(QDateTime::currentDateTime());

    dte.show();


    return a.exec();
}
