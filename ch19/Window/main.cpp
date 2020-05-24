#include <QtWidgets>

class Window : public QLabel {
private:
    QPoint m_ptPosition;

protected:
    virtual void mousePressEvent(QMouseEvent* pe)
    {
        m_ptPosition = pe->pos();
    }

    virtual void mouseMoveEvent(QMouseEvent* pe)
    {
        move(pe->globalPos() - m_ptPosition);
    }

public:
    Window(QWidget* pwgt = 0)
        : QLabel(pwgt,  Qt::FramelessWindowHint | Qt::Window)
    {
    }
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Window       wnd;

    wnd.setAttribute(Qt::WA_TranslucentBackground);
    wnd.setPixmap(QPixmap(":/happyos.png"));

    QPushButton* pcmdQuit = new QPushButton("X");
    pcmdQuit->setFixedSize(16, 16);
    QObject::connect(pcmdQuit, SIGNAL(clicked()), &a, SLOT(quit()));

    //setup layout
    QVBoxLayout* pvbx = new QVBoxLayout;
    pvbx->addWidget(pcmdQuit);
    pvbx->addStretch(1);
    wnd.setLayout(pvbx);

    wnd.show();

    return a.exec();
}
