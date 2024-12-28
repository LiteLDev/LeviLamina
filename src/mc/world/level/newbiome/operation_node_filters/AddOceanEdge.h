#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/BiomeTemperatureCategory.h"
#include "mc/world/level/newbiome/operation_node_details/NeighborhoodReader.h"
#include "mc/world/level/newbiome/operation_node_filters/FilterBase.h"

namespace OperationNodeFilters {

struct AddOceanEdge
: public ::OperationNodeFilters::FilterBase<3, 3, ::BiomeTemperatureCategory, ::BiomeTemperatureCategory> {
public:
    // prevent constructor by default
    AddOceanEdge& operator=(AddOceanEdge const&);
    AddOceanEdge(AddOceanEdge const&);
    AddOceanEdge();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BiomeTemperatureCategory
    operator()(::OperationNodeDetails::NeighborhoodReader<::BiomeTemperatureCategory, 1, 1>& reader) const;
    // NOLINTEND
};

} // namespace OperationNodeFilters
