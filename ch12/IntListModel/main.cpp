#include <QtWidgets>
#include <IntListModel.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    IntListModel model(QList<int>() << 123 << 2431 << 32 << 5342 << 722);

    QListView list;
    list.setModel(&model);
    list.show();

    QTableView table;
    table.setModel(&model);
    table.show();

    return a.exec();
}
