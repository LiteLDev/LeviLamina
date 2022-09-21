/**
 * @file  MC/PlayerShootArrowEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -2140785803
     * @symbol ??0PlayerShootArrowEvent@@QEAA@AEBU0@@Z
     */
    MCAPI PlayerShootArrowEvent(struct PlayerShootArrowEvent const &);
    /**
     * @hash   1675426251
     * @symbol ??1PlayerShootArrowEvent@@QEAA@XZ
     */
    MCAPI ~PlayerShootArrowEvent();

};