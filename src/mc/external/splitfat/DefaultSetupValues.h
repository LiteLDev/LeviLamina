#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

enum class DefaultSetupValues : uint {
    ClusterSize             = 8192,
    ChunkSize               = 262144,
    DataBlockSize           = 268435456,
    TotalBlockCount         = 24,
    FirstFileDataBlockIndex = 1,
};

}
