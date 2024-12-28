#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/operation_node_details/NeighborhoodReader.h"
#include "mc/world/level/newbiome/operation_node_filters/FilterBase.h"

// auto generated forward declare list
// clang-format off
namespace OperationNodeValues { struct PreBiome; }
// clang-format on

namespace OperationNodeFilters {

struct AddEdgeHeatIce
: public ::OperationNodeFilters::FilterBase<3, 3, ::OperationNodeValues::PreBiome, ::OperationNodeValues::PreBiome> {
public:
    // prevent constructor by default
    AddEdgeHeatIce& operator=(AddEdgeHeatIce const&);
    AddEdgeHeatIce(AddEdgeHeatIce const&);
    AddEdgeHeatIce();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::OperationNodeValues::PreBiome
    operator()(::OperationNodeDetails::NeighborhoodReader<::OperationNodeValues::PreBiome, 1, 1>& reader) const;
    // NOLINTEND
};

} // namespace OperationNodeFilters
