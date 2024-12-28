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
    ::ll::UntypedStorage<8, 16> mUnk580520;
    // NOLINTEND

public:
    // prevent constructor by default
    BrushEffectsCooldownComponent& operator=(BrushEffectsCooldownComponent const&);
    BrushEffectsCooldownComponent(BrushEffectsCooldownComponent const&);
    BrushEffectsCooldownComponent();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ExpiringTick const& EXPIRED_TICK();
    // NOLINTEND
};
