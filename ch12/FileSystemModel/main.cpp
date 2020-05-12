#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFileSystemModel model;
    QTreeView treeView;

    model.setRootPath(QDir::rootPath());
    treeView.setModel(&model);
    treeView.show();

    return a.exec();
}
