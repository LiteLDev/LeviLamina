#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum class RM3DestructionState : int {
    SendDestruction       = 0,
    DoNotQueryDestruction = 1,
    NoAction              = 2,
    Max                   = 3,
};

}
