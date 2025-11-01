#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LodestoneCompassComponentCalculator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8303a4;
    ::ll::UntypedStorage<4, 4> mUnk1caf70;
    ::ll::UntypedStorage<1, 1> mUnkb51bea;
    ::ll::UntypedStorage<4, 12> mUnk2c37c3;
    ::ll::UntypedStorage<4, 4> mUnk3979df;
    // NOLINTEND

public:
    // prevent constructor by default
    LodestoneCompassComponentCalculator& operator=(LodestoneCompassComponentCalculator const&);
    LodestoneCompassComponentCalculator(LodestoneCompassComponentCalculator const&);
    LodestoneCompassComponentCalculator();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float& COOLDOWN_TIME_SECONDS();
    // NOLINTEND

};
