#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TextureLoadState : uchar {
    // bitfield representation
    UnloadedBit     = 0,
    PendingBit      = 1 << 0,
    LoadedBit       = 1 << 1,
    PendingMetadata = 1 << 2,
    LoadedMetadata  = 1 << 3,
};
