#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ActorSelectorType : int {
    Self          = 0,
    Entities      = 1,
    Players       = 2,
    NearestPlayer = 3,
    RandomPlayer  = 4,
    OwnedAgent    = 5,
    Agents        = 6,
    Initiator     = 7,
};
