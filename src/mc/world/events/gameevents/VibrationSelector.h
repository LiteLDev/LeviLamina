#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VibrationSelector {

public:
    // prevent constructor by default
    VibrationSelector& operator=(VibrationSelector const&) = delete;
    VibrationSelector(VibrationSelector const&)            = delete;
    VibrationSelector()                                    = delete;

public:
    /**
     * @symbol
     * ?addCandidate\@VibrationSelector\@\@QEAAXUTick\@\@AEBVGameEvent\@\@AEBUGameEventContext\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void
    addCandidate(struct Tick, class GameEvent const&, struct GameEventContext const&, class BlockPos const&); // NOLINT
};
