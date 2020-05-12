#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget wgt;
    QStringListModel model;

    model.setStringList(QStringList() << "xandria"
                        << "Epika"
                        << "Zerion"
                        << "Evanesse"
                        << "Nighwish"
                        );
    QSortFilterProxyModel proxyModel;
    proxyModel.setSourceModel(&model);
    proxyModel.setFilterWildcard("E*");

    QListView * pListView = new QListView;
    pListView->setModel(&model);

    QListView * pListView2 = new QListView;
    pListView2->setModel(&proxyModel);

    QHBoxLayout* phbxLayout = new QHBoxLayout;
    phbxLayout->addWidget(pListView);
    phbxLayout->addWidget(pListView2);

    wgt.setLayout(phbxLayout);
    wgt.show();

    return a.exec();
}
