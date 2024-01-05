#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/BiomeTemperatureCategory.h"
#include "mc/world/level/newbiome/NeighborhoodReader.h"

namespace OperationNodeFilters {

struct AddOceanEdge {
public:
    // prevent constructor by default
    AddOceanEdge& operator=(AddOceanEdge const&);
    AddOceanEdge(AddOceanEdge const&);
    AddOceanEdge();

public:
    // NOLINTBEGIN
    // symbol:
    // ??RAddOceanEdge@OperationNodeFilters@@QEBA?AW4BiomeTemperatureCategory@@AEAU?$NeighborhoodReader@W4BiomeTemperatureCategory@@$00$00@OperationNodeDetails@@@Z
    MCAPI ::BiomeTemperatureCategory
    operator()(struct OperationNodeDetails::NeighborhoodReader<::BiomeTemperatureCategory, 1, 1>& reader) const;

    // NOLINTEND
};

}; // namespace OperationNodeFilters
