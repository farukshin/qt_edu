#include <QtWidgets>
int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    QWidget      wgt;

    QPushButton* pcmdA = new QPushButton("Button1");
    QPushButton* pcmdB = new QPushButton("Button2");
    QPushButton* pcmdC = new QPushButton("Button3");

    QVBoxLayout* pvbxLayout = new QVBoxLayout;
    pvbxLayout->addWidget(pcmdA);
    pvbxLayout->addWidget(pcmdB);
    pvbxLayout->addWidget(pcmdC);
    wgt.setLayout(pvbxLayout);

    QFile file(":/style/simple.qss");
    file.open(QFile::ReadOnly);
    QString strCSS = QLatin1String(file.readAll());

    qApp->setStyleSheet(strCSS);
    wgt.show();

    return app.exec();
}
