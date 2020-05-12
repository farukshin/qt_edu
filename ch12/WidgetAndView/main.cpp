#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QStringList lst;
    QListWidget lwg;
    QListWidgetItem* pitem = 0;

    lwg.setIconSize(QSize(48, 48));
    lst << "Linux" << "Windows" << "MacOSX" << "Android";
    foreach(QString str, lst)
    {
        pitem = new QListWidgetItem(str, &lwg);
        pitem->setIcon(QPixmap(":/"+str+".jpg"));
    }
    lwg.setWindowTitle("ListWhidget");
    lwg.show();

    QListView listView;
    listView.setModel(lwg.model());
    listView.setSelectionModel(lwg.selectionModel());
    listView.setWindowTitle("ListView");
    listView.show();

    return a.exec();
}
