#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LadderResetFallDamageSystem {

public:
    // prevent constructor by default
    LadderResetFallDamageSystem& operator=(LadderResetFallDamageSystem const&) = delete;
    LadderResetFallDamageSystem(LadderResetFallDamageSystem const&)            = delete;
    LadderResetFallDamageSystem()                                              = delete;

public:
    /**
     * @symbol ?createLadderResetFallDamageSystem\@LadderResetFallDamageSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createLadderResetFallDamageSystem(); // NOLINT
};
