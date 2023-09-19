#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ThrownTridentNormalTickSystem {
public:
    // prevent constructor by default
    ThrownTridentNormalTickSystem& operator=(ThrownTridentNormalTickSystem const&);
    ThrownTridentNormalTickSystem(ThrownTridentNormalTickSystem const&);
    ThrownTridentNormalTickSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@ThrownTridentNormalTickSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
