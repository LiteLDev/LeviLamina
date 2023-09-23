#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CreativePlayerOnFireServerSystem {
public:
    // prevent constructor by default
    CreativePlayerOnFireServerSystem& operator=(CreativePlayerOnFireServerSystem const&);
    CreativePlayerOnFireServerSystem(CreativePlayerOnFireServerSystem const&);
    CreativePlayerOnFireServerSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@CreativePlayerOnFireServerSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
