/**
 * @file  PlayerInteractEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure PlayerInteractEvent.
 *
 */
struct PlayerInteractEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERINTERACTEVENT
public:
    struct PlayerInteractEvent& operator=(struct PlayerInteractEvent const &) = delete;
    PlayerInteractEvent() = delete;
#endif

public:
    /**
     * @symbol  ??0PlayerInteractEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI PlayerInteractEvent(struct PlayerInteractEvent const &);
    /**
     * @symbol  ??1PlayerInteractEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerInteractEvent();

};