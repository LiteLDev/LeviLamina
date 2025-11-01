#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ClientInstanceState : int {
    Idle = 0,
    WaitingForPlayer = 1,
    WaitingToPlay = 2,
    Playing = 3,
};
