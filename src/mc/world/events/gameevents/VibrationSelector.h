#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VibrationSelector {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VIBRATIONSELECTOR
public:
    VibrationSelector& operator=(VibrationSelector const&) = delete;
    VibrationSelector(VibrationSelector const&)            = delete;
    VibrationSelector()                                    = delete;
#endif

public:
    /**
     * @symbol
     * ?addCandidate\@VibrationSelector\@\@QEAAXUTick\@\@AEBVGameEvent\@\@AEBUGameEventContext\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void addCandidate(struct Tick, class GameEvent const&, struct GameEventContext const&, class BlockPos const&);
};
