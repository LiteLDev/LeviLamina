#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ThrownTridentNormalTickSystem {

public:
    // prevent constructor by default
    ThrownTridentNormalTickSystem& operator=(ThrownTridentNormalTickSystem const&) = delete;
    ThrownTridentNormalTickSystem(ThrownTridentNormalTickSystem const&)            = delete;
    ThrownTridentNormalTickSystem()                                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createSystem\@ThrownTridentNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND
};
