#pragma once
#include <QWidget>

class MultiTouchWidget : public QWidget {
private:
    QList<QColor>                  m_lstCols;
    QList<QTouchEvent::TouchPoint> m_lstTps;

protected:
    virtual void paintEvent(QPaintEvent*);
    virtual bool event     (QEvent*     );

public:
    MultiTouchWidget(QWidget* pwgt = 0);
};
