#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSONSchemaPath : uchar {
    None = 0,
    Biome = 1,
    Block = 2,
    BlockComponents = 3,
    Camera = 4,
    Common = 5,
    CraftingCatalog = 6,
    Dimension = 7,
    Entity = 8,
    Item = 9,
    ItemCommon = 10,
    ItemComponents = 11,
    Packaging = 12,
    Particles = 13,
    Rendering = 14,
    ServerConfig = 15,
    Spawn = 16,
    Structure = 17,
    VoxelShapes = 18,
    World = 19,
    WorldCommon = 20,
    WorldComponents = 21,
};
