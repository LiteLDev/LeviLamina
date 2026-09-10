#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSONSchemaPath : uchar {
    None            = 0,
    Biome           = 1,
    Block           = 2,
    BlockComponents = 3,
    Camera          = 4,
    Common          = 5,
    CraftingCatalog = 6,
    DataDrivenUi    = 7,
    Dimension       = 8,
    Entity          = 9,
    Item            = 10,
    ItemCommon      = 11,
    ItemComponents  = 12,
    Packaging       = 13,
    Particles       = 14,
    Rendering       = 15,
    ServerConfig    = 16,
    Sound           = 17,
    Spawn           = 18,
    Structure       = 19,
    VoxelShapes     = 20,
    World           = 21,
    WorldCommon     = 22,
    WorldComponents = 23,
};
