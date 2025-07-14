#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes {

enum class AssetType : int {
    Biome           = 0,
    Block           = 1,
    BlockTexture    = 2,
    Entity          = 3,
    Item            = 4,
    ItemTexture     = 5,
    LootTable       = 6,
    ParticleTexture = 7,
};

}
