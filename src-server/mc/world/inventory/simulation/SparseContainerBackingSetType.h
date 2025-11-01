#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SparseContainerBackingSetType : int {
    ClientScratchContainer = 0,
    SetItem = 1,
    PlayerSetArmor = 2,
    PlayerSetOffhand = 3,
    PlayerSetUIItem = 4,
};
