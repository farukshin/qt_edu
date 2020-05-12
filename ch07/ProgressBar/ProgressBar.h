#pragma once

#include <QWidget>

class QProgressBar;

class ProgressBar : public QWidget
{
    Q_OBJECT
private:
    QProgressBar* m_pprb;
    int m_nStep;

public:
    ProgressBar(QWidget* pobj = 0);

public slots:
    void slotStep();
    void slotReset();
};

