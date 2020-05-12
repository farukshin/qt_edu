//#tech_debt
#include <QtWidgets>
#include "Buttons.h"

Buttons::Buttons(QWidget* pwgt/*= 0*/) : QGroupBox("QGroupBox", pwgt)
{
    resize(100, 150);
    setCheckable(true);
    setChecked(true);

    m_pradRed = new QRadioButton("&Red");
    m_pradGreen = new QRadioButton("&Green");
    m_pradBlue = new QRadioButton("&Blue");
    m_pradGreen->setChecked(true);

    connect(m_pradRed, SIGNAL(clicked()), SLOT(slotButtonClicked()));
    connect(m_pradGreen, SIGNAL(clicked()), SLOT(slotButtonClicked()));
    connect(m_pradBlue, SIGNAL(clicked()), SLOT(slotButtonClicked()));

    m_pchk = new QCheckBox("&Light");
    m_pchk->setChecked(true);
    connect(m_pchk, SIGNAL(clicked()), SLOT(slotButtonClicked()));

    QPushButton* pcmdExit = new QPushButton("&Exit");
    connect(pcmdExit, SIGNAL(clicked()), qApp, SLOT(quit()));

    QVBoxLayout* pvbxLayout = new QVBoxLayout;
    pvbxLayout->addWidget(m_pradRed);
    pvbxLayout->addWidget(m_pradGreen);
    pvbxLayout->addWidget(m_pradBlue);
    pvbxLayout->addWidget(m_pchk);
    pvbxLayout->addWidget(pcmdExit);

    setLayout(pvbxLayout);
    slotButtonClicked();
}

void Buttons::slotButtonClicked()
{
    QPalette pal    = palette();
    int      nLight = m_pchk->isChecked() ? 150 : 80;
    if(m_pradRed->isChecked())
        pal.setColor(backgroundRole(), QColor(Qt::red).light(nLight));
    else if(m_pradGreen->isChecked())
        pal.setColor(backgroundRole(), QColor(Qt::green).light(nLight));

    else
        pal.setColor(backgroundRole(), QColor(Qt::blue).light(nLight));

    setPalette(pal);
}
