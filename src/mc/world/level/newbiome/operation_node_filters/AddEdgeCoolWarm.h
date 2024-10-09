#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/operation_node_details/NeighborhoodReader.h"

// auto generated forward declare list
// clang-format off
namespace OperationNodeValues { struct PreBiome; }
// clang-format on

namespace OperationNodeFilters {

struct AddEdgeCoolWarm {
public:
    // prevent constructor by default
    AddEdgeCoolWarm& operator=(AddEdgeCoolWarm const&);
    AddEdgeCoolWarm(AddEdgeCoolWarm const&);
    AddEdgeCoolWarm();

public:
    // NOLINTBEGIN
    MCAPI struct OperationNodeValues::PreBiome
    operator()(struct OperationNodeDetails::NeighborhoodReader<struct OperationNodeValues::PreBiome, 1, 1>& reader
    ) const;

    // NOLINTEND
};

}; // namespace OperationNodeFilters
