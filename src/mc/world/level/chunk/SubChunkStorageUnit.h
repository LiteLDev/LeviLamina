#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/chunk/Type.h"

namespace SubChunkStorageUnit {
union SubChunkStorageFormat {
    bool  network; // this(bf)+0x0:0x0 len(0x1)
    Type  type;    // this(bf)+0x0:0x1 len(0x7)
    uchar raw;     // this+0x0
};
}; // namespace SubChunkStorageUnit
