/**
 * @file  PlayerOpenContainerEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure PlayerOpenContainerEvent.
 *
 */
struct PlayerOpenContainerEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYEROPENCONTAINEREVENT
public:
    struct PlayerOpenContainerEvent& operator=(struct PlayerOpenContainerEvent const &) = delete;
    PlayerOpenContainerEvent(struct PlayerOpenContainerEvent const &) = delete;
    PlayerOpenContainerEvent() = delete;
#endif

public:
    /**
     * @symbol  ??1PlayerOpenContainerEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerOpenContainerEvent();

};