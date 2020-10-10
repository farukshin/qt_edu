#include <QtWidgets>
#include <QVideoWidget>

#include "VideoPlayer.h"

VideoPlayer::VideoPlayer(QWidget* pwgt/*=0*/) : SoundPlayer(pwgt)
{

    QVideoWidget* pvw = new QVideoWidget;
    pvw->setMinimumSize(300, 300);

    m_pvbxMainLayout->addWidget(pvw);

    m_pmp->setVideoOutput(pvw);

    connect(m_pmp, SIGNAL(stateChanged(QMediaPlayer::State)),
        SLOT(slotStateChanged(QMediaPlayer::State)));
}

void
VideoPlayer::slotStateChanged(QMediaPlayer::State st)
{
    if (st == QMediaPlayer::PlayingState) {
        resize(size() + QSize(1, 1));
        resize(size() - QSize(1, 1));
    }
}
