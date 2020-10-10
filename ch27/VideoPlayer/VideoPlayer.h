#pragma once
#include "../SoundPlayer/SoundPlayer.h"

class VideoPlayer : public SoundPlayer {
    Q_OBJECT

public:
    VideoPlayer(QWidget* pwgt = 0);

private slots:
    void slotStateChanged(QMediaPlayer::State);
};
