#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SubChunkStorageUnit {

enum class PruneType : int {
    Normal            = 0x0,
    RemoveStaleBlocks = 0x1,
};
};
