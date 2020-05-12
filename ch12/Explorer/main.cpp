#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplitter spl(Qt::Horizontal);
    QFileSystemModel model;

    model.setRootPath(QDir::rootPath());

    QTreeView* pTreeView = new QTreeView;
    pTreeView->setModel(&model);

    QTableView* pTabView = new QTableView;
    pTabView->setModel(&model);


    QObject::connect(pTreeView, SIGNAL(clicked(const QModelIndex&)),
                     pTabView, SLOT(setRootIndex(const QModelIndex&))
                     );

    QObject::connect(pTabView, SIGNAL(activated(const QModelIndex&)),
                     pTreeView, SLOT(setCurrentIndex(const QModelIndex&))
                     );

    QObject::connect(pTabView, SIGNAL(activated(const QModelIndex&)),
                     pTabView, SLOT(setRootIndex(const QModelIndex&))
                     );

    spl.addWidget(pTreeView);
    spl.addWidget(pTabView);
    spl.show();

    return a.exec();
}
