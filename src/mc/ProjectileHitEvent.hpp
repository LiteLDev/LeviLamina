/**
 * @file  ProjectileHitEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ProjectileHitEvent.
 *
 */
struct ProjectileHitEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROJECTILEHITEVENT
public:
    struct ProjectileHitEvent& operator=(struct ProjectileHitEvent const &) = delete;
    ProjectileHitEvent() = delete;
#endif

public:
    /**
     * @symbol  ??0ProjectileHitEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ProjectileHitEvent(struct ProjectileHitEvent const &);
    /**
     * @symbol  ??1ProjectileHitEvent\@\@QEAA\@XZ
     */
    MCAPI ~ProjectileHitEvent();

};