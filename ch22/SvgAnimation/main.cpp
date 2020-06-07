#include <QtWidgets>
#include <QtSvg>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSvgWidget svg(":/motion.svg");
    svg.show();

    QObject::connect(svg.renderer(), SIGNAL(repaintNeeded()), &svg, SLOT(repaint()));

    return a.exec();
}
