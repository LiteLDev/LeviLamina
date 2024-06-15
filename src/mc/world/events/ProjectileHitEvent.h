#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ProjectileHitEvent {
public:
    // prevent constructor by default
    ProjectileHitEvent& operator=(ProjectileHitEvent const&);
    ProjectileHitEvent(ProjectileHitEvent const&);
    ProjectileHitEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1ProjectileHitEvent@@QEAA@XZ
    MCAPI ~ProjectileHitEvent();

    // NOLINTEND
};
