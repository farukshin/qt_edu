#include <QtGui>
#include "ImageDraw.h"

ImageDraw::ImageDraw(QWidget* pwgt/*=0*/) : QWidget(pwgt) 
{
}

/*virtual*/ImageDraw::~ImageDraw()
{
}

/*virtual*/ void ImageDraw::paintEvent(QPaintEvent*)
{
    QImage   img(size(), QImage::Format_ARGB32_Premultiplied);
    QPainter painter;

    painter.begin(&img);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.eraseRect(rect());
    painter.drawEllipse(0, 0, size().width(), size().height());
    painter.end();

    painter.begin(this);
    painter.drawImage(0, 0, img);
    painter.end();
}
