#include <QtWidgets>

QWidget* styledWidget(QStyle* pstyle)
{
    QGroupBox* pgr = new QGroupBox(pstyle->metaObject()->className());
    QScrollBar* psbr = new QScrollBar(Qt::Horizontal);
    QCheckBox* pchk = new QCheckBox("&Check Box");
    QSlider* psld = new QSlider(Qt::Horizontal);
    QRadioButton* prad = new QRadioButton("&Radio Button");
    QPushButton* pcmd = new QPushButton("&Push Button");

    QVBoxLayout* pvbxLayout = new QVBoxLayout;
    pvbxLayout->addWidget(psbr);
    pvbxLayout->addWidget(pchk);
    pvbxLayout->addWidget(psld);
    pvbxLayout->addWidget(prad);
    pvbxLayout->addWidget(pcmd);
    pgr->setLayout(pvbxLayout);

    QList<QWidget*> pwgtList = pgr->findChildren<QWidget*>();
    foreach(QWidget * pwgt, pwgtList) {
        pwgt->setStyle(pstyle);
    }
    return pgr;
}

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QWidget      wgt;

    QHBoxLayout* phbxLayout = new QHBoxLayout;
    foreach(QString str, QStyleFactory::keys()) {
        phbxLayout->addWidget(styledWidget(QStyleFactory::create(str)));
    }
    wgt.setLayout(phbxLayout);

    wgt.show();

    return app.exec();
}
