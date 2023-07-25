#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ThrownTridentNormalTickSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_THROWNTRIDENTNORMALTICKSYSTEM
public:
    ThrownTridentNormalTickSystem& operator=(ThrownTridentNormalTickSystem const&) = delete;
    ThrownTridentNormalTickSystem(ThrownTridentNormalTickSystem const&)            = delete;
    ThrownTridentNormalTickSystem()                                                = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@ThrownTridentNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};
