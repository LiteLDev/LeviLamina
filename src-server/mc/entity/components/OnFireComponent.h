#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OnFireComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mOnFireTicks;
    ::ll::TypedStorage<1, 1, bool> mIgnitedThisTick;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& LEGACY_FIRE_TAG();

    MCAPI static ::std::string const& ON_FIRE_TAG();
    // NOLINTEND

};
