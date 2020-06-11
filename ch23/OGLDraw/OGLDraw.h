#pragma once

#include <QOpenGLWidget>

class OGLDraw : public QOpenGLWidget
{
protected:
    virtual void initializeGL();
    virtual void resizeGL(int nWidth, int nHeight);
    virtual void paintGL();

public:
    OGLDraw(QWidget *pwgt = 0);

    void draw(int xOffset, int yOffset, GLenum type);
};
