#pragma once

#include <QtWidgets>

class QPainter;

class CustomStyle : public QCommonStyle {
public:
    virtual void polish(QWidget* pwgt);
    virtual void unpolish(QWidget* pwgt);

    virtual void drawPrimitive(PrimitiveElement elem,
        const QStyleOption* popt,
        QPainter* ppainter,
        const QWidget* pwgt = 0
    ) const;
};
