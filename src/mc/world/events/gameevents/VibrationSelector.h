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
    MCAPI void addCandidate(
        struct Tick                    currentTick,
        class GameEvent const&         gameEvent,
        struct GameEventContext const& gameEventContext,
        class BlockPos const&          destinationPos
    );

    // NOLINTEND
};
