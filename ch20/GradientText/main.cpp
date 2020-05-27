#include <QtWidgets>

class DrawTextWidget : public QWidget
{
protected:
    virtual void paintEvent(QPaintEvent *)
    {
        QLinearGradient gradient(0, 0, 500, 0);
        gradient.setColorAt(0, Qt::red);
        gradient.setColorAt(0.5, Qt::green);
        gradient.setColorAt(1, Qt::blue);

        QPainter painter(this);
        painter.setPen(QPen(gradient, 0));
        painter.setFont(QFont("Times", 50, QFont::Normal));
        painter.drawText(60, 60, "Gradient Text");
    }

public:
    DrawTextWidget(QWidget *pwt = 0) : QWidget(pwt)
    {
    }
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DrawTextWidget dwt;
    dwt.resize(500, 80);
    dwt.show();

    return a.exec();
}
