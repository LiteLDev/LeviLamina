#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/NeighborhoodReader.h"

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
    // symbol:
    // ??RAddEdgeCoolWarm@OperationNodeFilters@@QEBA?AUPreBiome@OperationNodeValues@@AEAU?$NeighborhoodReader@UPreBiome@OperationNodeValues@@$00$00@OperationNodeDetails@@@Z
    MCAPI struct OperationNodeValues::PreBiome
    operator()(struct OperationNodeDetails::NeighborhoodReader<struct OperationNodeValues::PreBiome, 1, 1>& reader
    ) const;

    // NOLINTEND
};

}; // namespace OperationNodeFilters
