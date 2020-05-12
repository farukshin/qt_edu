#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QComboBox cmb;
    QStringList lst;

    lst<<"Jhon"<<"Paul"<<"Ivan"<<"Ringo";
    cmb.addItems(lst);
    cmb.setEditable(true);
    cmb.show();

    return a.exec();
}
