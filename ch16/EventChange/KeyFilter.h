#pragma once
#include <QtWidgets>

class KeyFilter : public QObject {
protected:
    bool eventFilter(QObject* pobj, QEvent* pe)
    {
        if (pe->type() == QEvent::KeyPress) {
            if (((QKeyEvent*)pe)->key() == Qt::Key_Z) {
                QKeyEvent keyEvent(QEvent::KeyPress,
                                   Qt::Key_A,
                                   Qt::NoModifier,
                                   "A"
                                  );
                QApplication::sendEvent(pobj, &keyEvent);
                return true;
            }
        }
        return false;
    }

public:
    KeyFilter(QObject* pobj = 0)
        : QObject(pobj)
    {
    }
};
