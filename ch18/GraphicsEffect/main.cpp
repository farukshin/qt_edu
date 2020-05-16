#include <QtWidgets>

QLabel *lbl(QGraphicsEffect *pge)
{
    QLabel *plbl = new QLabel;
    plbl->setPixmap(QPixmap(":/happyos.png"));

    if (pge)
    {
        plbl->setGraphicsEffect(pge);
    }
    return plbl;
}

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QWidget wgt;
    QGraphicsBlurEffect *pBlur = new QGraphicsBlurEffect;
    QGraphicsDropShadowEffect *pShadow = new QGraphicsDropShadowEffect;
    QGraphicsColorizeEffect *pColorize = new QGraphicsColorizeEffect;

    QFormLayout *pform = new QFormLayout;
    pform->addRow("No Effects", lbl(0));
    pform->addRow("Blur", lbl(pBlur));
    pform->addRow("Drop Shadow", lbl(pShadow));
    pform->addRow("Colorize", lbl(pColorize));
    wgt.setLayout(pform);

    wgt.show();

    return app.exec();
}
