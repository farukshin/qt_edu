#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTabWidget tab;
    QStringList lst;

    lst<<"Linux"<<"Windows"<<"MacOSX"<<"Android";
    foreach(QString str, lst)
    {
        tab.addTab(new QLabel(str, &tab), QPixmap(":/"+str+".jpg"), str);
    }
    tab.resize(420, 100);
    tab.show();

    return a.exec();
}
