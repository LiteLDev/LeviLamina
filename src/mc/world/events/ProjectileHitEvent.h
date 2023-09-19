#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ProjectileHitEvent {
public:
    // prevent constructor by default
    ProjectileHitEvent& operator=(ProjectileHitEvent const&);
    ProjectileHitEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ProjectileHitEvent@@QEAA@AEBU0@@Z
    MCAPI ProjectileHitEvent(struct ProjectileHitEvent const&);

    // symbol: ??1ProjectileHitEvent@@QEAA@XZ
    MCAPI ~ProjectileHitEvent();

    // NOLINTEND
};
