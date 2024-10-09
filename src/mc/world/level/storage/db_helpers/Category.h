#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DBHelpers {

enum class Category : int {
    Uncategorized    = 0x0,
    Actor            = 0x1,
    Biome            = 0x2,
    Block            = 0x3,
    Chunk            = 0x4,
    EDU              = 0x5,
    Item             = 0x6,
    Player           = 0x7,
    TickingArea      = 0x8,
    VolumeArea       = 0x9,
    WorldFeature     = 0xA,
    ForcedCorruption = 0xB,
    Count            = 0xC,
    All              = 0xD,
};
};
