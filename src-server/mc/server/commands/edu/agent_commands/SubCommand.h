#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentCommands {

enum class SubCommand : int {
    None = 0,
    Destroy = 1,
    Inspect = 2,
    Interact = 3,
};

}
