#include <QtWidgets>

class DrawTextWidget : public QWidget
{
protected:
    virtual void paintEvent(QPaintEvent *)
    {
        QPainter painter(this);
        QRect r = rect();
        painter.setFont(QFont("Times", 50, QFont::Normal));
        painter.drawRect(r);
        painter.drawText(r, Qt::AlignCenter | Qt::TextWordWrap, "Draw Text");
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
    dwt.resize(200, 150);
    dwt.show();

    return a.exec();
}
