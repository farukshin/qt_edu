#pragma once

#include <QWidget>

class QPrinter;
class QPaintDevice;

class Printer : public QWidget
{
    Q_OBJECT

private:
    QPrinter *m_pprinter;

protected:
    virtual void paintEvent(QPaintEvent *pe);
    void draw(QPaintDevice *ppd);

public:
    Printer(QWidget *pwgt = 0);
    virtual ~Printer();

public slots:
    void slotPrint();
};
