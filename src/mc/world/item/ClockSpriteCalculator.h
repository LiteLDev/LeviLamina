#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClockSpriteCalculator {
public:
    // prevent constructor by default
    ClockSpriteCalculator& operator=(ClockSpriteCalculator const&);
    ClockSpriteCalculator(ClockSpriteCalculator const&);

public:
    // NOLINTBEGIN
    MCAPI ClockSpriteCalculator();

    MCAPI int update(class Actor& entity, bool instant);

    MCAPI int update(class BlockSource const& region, class Vec3 const& pos, bool instant);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
