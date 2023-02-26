/**
 * @file  PlayerShootArrowEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure PlayerShootArrowEvent.
 *
 */
struct PlayerShootArrowEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSHOOTARROWEVENT
public:
    struct PlayerShootArrowEvent& operator=(struct PlayerShootArrowEvent const &) = delete;
    PlayerShootArrowEvent() = delete;
#endif

public:
    /**
     * @symbol  ??0PlayerShootArrowEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI PlayerShootArrowEvent(struct PlayerShootArrowEvent const &);
    /**
     * @symbol  ??1PlayerShootArrowEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerShootArrowEvent();

};