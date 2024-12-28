#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BlockChangedEventTarget : uchar {
    SelfBlock     = 0,
    NeighborBlock = 1,
};
