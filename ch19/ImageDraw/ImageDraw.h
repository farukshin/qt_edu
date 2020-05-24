#pragma once

#include <QWidget>

class ImageDraw : public QWidget {
protected:
    virtual void paintEvent(QPaintEvent* pe);

public:
    ImageDraw(QWidget* pwgt = 0);
    virtual ~ImageDraw();
};

