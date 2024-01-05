#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VibrationSelector {
public:
    // prevent constructor by default
    VibrationSelector& operator=(VibrationSelector const&);
    VibrationSelector(VibrationSelector const&);
    VibrationSelector();

public:
    // NOLINTBEGIN
    // symbol: ?addCandidate@VibrationSelector@@QEAAXUTick@@AEBVGameEvent@@AEBUGameEventContext@@AEBVBlockPos@@@Z
    MCAPI void addCandidate(
        struct Tick currentTick,
        class GameEvent const&,
        struct GameEventContext const&,
        class BlockPos const& destinationPos
    );

    // NOLINTEND
};
