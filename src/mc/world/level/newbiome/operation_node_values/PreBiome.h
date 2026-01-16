#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/BiomeTemperatureCategory.h"
#include "mc/world/level/newbiome/operation_node_values/Terrain.h"

namespace OperationNodeValues {

struct PreBiome {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::OperationNodeValues::Terrain> mTerrain;
    ::ll::TypedStorage<1, 1, ::BiomeTemperatureCategory>     mTemperature;
    // NOLINTEND
};

} // namespace OperationNodeValues
