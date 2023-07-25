#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ProjectileHitEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROJECTILEHITEVENT
public:
    ProjectileHitEvent& operator=(ProjectileHitEvent const&) = delete;
    ProjectileHitEvent()                                     = delete;
#endif

public:
    /**
     * @symbol ??0ProjectileHitEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ProjectileHitEvent(struct ProjectileHitEvent const&);
    /**
     * @symbol ??1ProjectileHitEvent\@\@QEAA\@XZ
     */
    MCAPI ~ProjectileHitEvent();
};
