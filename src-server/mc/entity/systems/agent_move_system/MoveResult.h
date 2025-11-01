#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentMoveSystem {

enum class MoveResult : int {
    Moving = 0,
    Blocked = 1,
    Reached = 2,
};

}
