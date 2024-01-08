#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BlockUpdateFlag : uchar {
    None        = 0,
    Neighbors   = 1 << 0,
    Network     = 1 << 1,
    NoGraphic   = 1 << 2,
    Priority    = 1 << 3,
    All         = Neighbors | Network, // default value in BDS
    AllPriority = All | Priority,
};
