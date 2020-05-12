#pragma once
#include <QGroupBox>

class QCheckBox;
class QRadioButton;

class Buttons : public QGroupBox {
    Q_OBJECT
private:
    QCheckBox*    m_pchk;
    QRadioButton* m_pradRed;
    QRadioButton* m_pradGreen;
    QRadioButton* m_pradBlue;

public:
    Buttons(QWidget* pwgt = 0);

public slots:
    void slotButtonClicked();
};

