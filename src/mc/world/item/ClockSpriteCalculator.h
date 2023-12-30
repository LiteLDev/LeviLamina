#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClockSpriteCalculator {
public:
    // prevent constructor by default
    ClockSpriteCalculator& operator=(ClockSpriteCalculator const&);
    ClockSpriteCalculator(ClockSpriteCalculator const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ClockSpriteCalculator@@QEAA@XZ
    MCAPI ClockSpriteCalculator();

    // symbol: ?update@ClockSpriteCalculator@@QEAAHAEAVActor@@_N@Z
    MCAPI int update(class Actor& entity, bool instant);

    // symbol: ?update@ClockSpriteCalculator@@QEAAHAEBVBlockSource@@AEBVVec3@@_N@Z
    MCAPI int update(class BlockSource const& region, class Vec3 const& pos, bool instant);

    // NOLINTEND
};
