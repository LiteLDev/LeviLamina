#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSONSchemaPath : uchar {
    None            = 0,
    Biome           = 1,
    Block           = 2,
    BlockComponents = 3,
    Camera          = 4,
    Common          = 5,
    Entity          = 6,
    Item            = 7,
    ItemCommon      = 8,
    ItemComponents  = 9,
    ServerConfig    = 10,
    Spawn           = 11,
    World           = 12,
    WorldCommon     = 13,
    WorldComponents = 14,
};
