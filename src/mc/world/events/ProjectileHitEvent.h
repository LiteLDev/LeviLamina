#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ProjectileHitEvent {

public:
    // prevent constructor by default
    ProjectileHitEvent& operator=(ProjectileHitEvent const&) = delete;
    ProjectileHitEvent()                                     = delete;

public:
    /**
     * @symbol ??0ProjectileHitEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ProjectileHitEvent(struct ProjectileHitEvent const&); // NOLINT
    /**
     * @symbol ??1ProjectileHitEvent\@\@QEAA\@XZ
     */
    MCAPI ~ProjectileHitEvent(); // NOLINT
};
