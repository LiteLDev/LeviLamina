#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ExpiringTick;
// clang-format on

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
