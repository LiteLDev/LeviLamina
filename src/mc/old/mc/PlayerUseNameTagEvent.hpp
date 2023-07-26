/**
 * @file  PlayerUseNameTagEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct PlayerUseNameTagEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERUSENAMETAGEVENT
public:
    struct PlayerUseNameTagEvent& operator=(struct PlayerUseNameTagEvent const &) = delete;
    PlayerUseNameTagEvent() = delete;
#endif

public:
    /**
     * @symbol  ??0PlayerUseNameTagEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI PlayerUseNameTagEvent(struct PlayerUseNameTagEvent const &);
    /**
     * @symbol  ??1PlayerUseNameTagEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerUseNameTagEvent();

};