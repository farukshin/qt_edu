#include <QtWidgets>

class ElideText : public QWidget
{
protected:
    virtual void paintEvent(QPaintEvent *)
    {
        QString str = "This is long text. Please, resize the window";
        QString strElide = fontMetrics().elidedText(str, Qt::ElideMiddle, width());
        QPainter painter(this);
        painter.drawText(rect(), strElide);
    }

public:
    ElideText(QWidget *pwt = 0) : QWidget(pwt)
    {
    }
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ElideText el;
    el.resize(200, 20);
    el.show();

    return a.exec();
}
