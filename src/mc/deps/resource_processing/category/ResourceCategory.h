#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

enum class ResourceCategory : ushort {
    Unknown             = 0,
    Particle            = 1,
    Camera              = 2,
    VoxelShape          = 3,
    TradeTable          = 4,
    CameraSpline        = 5,
    Actor               = 6,
    Item                = 7,
    Poi                 = 8,
    PoiTag              = 9,
    CraftingItemCatalog = 10,
    Block               = 11,
    LegacyClientBiome   = 12,
    UiGlobalVariables   = 13,
    SoundMapping        = 14,
    SoundDefinitions    = 15,
    MusicDefinitions    = 16,
    TickingTexture      = 17,
    UiDefinition        = 18,
    Count               = 19,
};

}
