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
    Spawn           = 17,
    Structure       = 18,
    VoxelShapes     = 19,
    World           = 20,
    WorldCommon     = 21,
    WorldComponents = 22,
};
