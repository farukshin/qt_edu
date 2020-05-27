#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene scene(QRectF(0, 0, 400, 400));
    QGraphicsView view(&scene);

    QPushButton cmd("Quit");
    QGraphicsProxyWidget *pproxyWidget = scene.addWidget(&cmd);
    QTransform transform = pproxyWidget->transform();

    transform.translate(100, 350);
    transform.rotate(-45, Qt::YAxis);
    transform.scale(8, 2);
    pproxyWidget->setTransform(transform);
    QObject::connect(&cmd, SIGNAL(clicked()), &a, SLOT(quit()));

    QDial dia;
    dia.setNotchesVisible(true);
    pproxyWidget = scene.addWidget(&dia);
    transform = pproxyWidget->transform();

    transform.scale(4, 2);
    transform.rotate(-45, Qt::YAxis);
    pproxyWidget->setTransform(transform);

    QProgressBar prb;
    prb.setFixedSize(500, 40);
    pproxyWidget = scene.addWidget(&prb);
    transform = pproxyWidget->transform();

    transform.translate(20, 200);
    transform.scale(2, 2);
    transform.rotate(80, Qt::YAxis);
    transform.rotate(30, Qt::XAxis);
    pproxyWidget->setTransform(transform);

    QObject::connect(&dia, SIGNAL(valueChanged(int)),
                     &prb, SLOT(setValue(int)));

    view.rotate(15);
    view.resize(500, 500);
    view.show();

    a.setStyle("Windows");

    return a.exec();
}
