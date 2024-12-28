#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SubChunkStorageUnit {

enum class PruneType : int {
    Normal            = 0,
    RemoveStaleBlocks = 1,
};

}
