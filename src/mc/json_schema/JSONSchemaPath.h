#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSONSchemaPath : uchar {
    Biome           = 0,
    Block           = 1,
    BlockComponents = 2,
    Camera          = 3,
    Common          = 4,
    CraftingCatalog = 5,
    DataDrivenUi    = 6,
    Dimension       = 7,
    Entity          = 8,
    Item            = 9,
    ItemCommon      = 10,
    ItemComponents  = 11,
    Packaging       = 12,
    Particles       = 13,
    Rendering       = 14,
    ServerConfig    = 15,
    Sound           = 16,
    Spawn           = 17,
    Structure       = 18,
    VoxelShapes     = 19,
    World           = 20,
    WorldCommon     = 21,
    WorldComponents = 22,
};
