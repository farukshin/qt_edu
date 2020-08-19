#include <QtWidgets>
#include "MyApplication.h"

MyApplication::MyApplication(QWidget* pwgt/*= 0*/) : QWidget(pwgt)
{
    QComboBox* pcbo = new QComboBox;
    QSpinBox* pspb = new QSpinBox;
    QSlider* psld = new QSlider(Qt::Horizontal);
    QRadioButton* prad = new QRadioButton("&Radio Button");
    QCheckBox* pchk = new QCheckBox("&Check Box");
    QPushButton* pcmd = new QPushButton("&Push Button");

    pcbo->addItems(QStyleFactory::keys());

    connect(pcbo,
        SIGNAL(activated(const QString&)),
        SLOT(slotChangeStyle(const QString&))
    );

    QVBoxLayout* pvbxLayout = new QVBoxLayout;
    pvbxLayout->addWidget(pcbo);
    pvbxLayout->addWidget(pspb);
    pvbxLayout->addWidget(psld);
    pvbxLayout->addWidget(prad);
    pvbxLayout->addWidget(pchk);
    pvbxLayout->addWidget(pcmd);
    setLayout(pvbxLayout);
}

// ----------------------------------------------------------------------
void MyApplication::slotChangeStyle(const QString& str)
{
    QStyle* pstyle = QStyleFactory::create(str);
    QApplication::setStyle(pstyle);
}
