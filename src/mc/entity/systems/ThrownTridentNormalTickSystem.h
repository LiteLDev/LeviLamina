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
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
