#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DBHelpers {

enum class Category : uint {
    Uncategorized = 0,
    Actor = 1,
    Biome = 2,
    Block = 3,
    Chunk = 4,
    Edu = 5,
    Item = 6,
    Player = 7,
    Realms = 8,
    TickingArea = 9,
    VolumeArea = 10,
    WorldFeature = 11,
    ForcedCorruption = 12,
    Count = 13,
    All = 14,
};

}
