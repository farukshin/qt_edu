#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QStringList lst;
    QTreeWidget twg;

    lst<<"Folder"<<"Used space";

    twg.setHeaderLabels(lst);
    twg.setSortingEnabled(true);

    QTreeWidgetItem* ptwgItem = new QTreeWidgetItem(&twg);
    ptwgItem->setText(0, "Local Dics(C)");
    ptwgItem->setIcon(0, QPixmap(":/drive.bmp"));

    QTreeWidgetItem* ptwgItemDir = 0;
    for(int i=1; i<20; ++i)
    {
        ptwgItemDir = new QTreeWidgetItem(ptwgItem);
        ptwgItemDir->setText(0, "Directory" + QString::number(i));
        ptwgItemDir->setText(1, QString::number(i)+"MB");
        ptwgItemDir->setIcon(0, QPixmap(":/folder.bmp"));
    }
    ptwgItem->setExpanded(true);
    twg.resize(350,310);
    twg.show();

    return a.exec();
}
