#include <QtWidgets>

class RadialGradientWidget : public QWidget
{
protected:
    virtual void paintEvent(QPaintEvent *)
    {
        QPainter painter(this);
        QPointF ptCenter(rect().center());
        QRadialGradient gradient(ptCenter, width() / 2, ptCenter);

        gradient.setColorAt(0, Qt::red);
        gradient.setColorAt(0.5, Qt::green);
        gradient.setColorAt(1, Qt::blue);
        painter.setBrush(gradient);
        painter.drawRect(rect());
    }

public:
    RadialGradientWidget(QWidget *pwgt = 0) : QWidget(pwgt)
    {
    }
};

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    RadialGradientWidget wgt;

    wgt.show();

    return app.exec();
}
