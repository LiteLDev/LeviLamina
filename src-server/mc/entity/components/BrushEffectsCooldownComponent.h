#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/util/ExpiringTick.h"

class BrushEffectsCooldownComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpiringTick> mCooldown;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ExpiringTick const& EXPIRED_TICK();
    // NOLINTEND
};
