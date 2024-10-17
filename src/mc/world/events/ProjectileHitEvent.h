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
    MCAPI ~ProjectileHitEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
