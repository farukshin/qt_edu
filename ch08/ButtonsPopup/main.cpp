#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPushButton cmd("Menu");
    QMenu* pmnu = new QMenu(&cmd);
    pmnu->addAction("Item1");
    pmnu->addAction("Item2");
    pmnu->addAction("&Quit", &a, SLOT(quit()));

    cmd.setMenu(pmnu);
    cmd.show();

    return a.exec();
}
