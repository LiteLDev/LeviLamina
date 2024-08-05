#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/NeighborhoodReader.h"

namespace OperationNodeFilters {

struct River {
public:
    // prevent constructor by default
    River& operator=(River const&);
    River(River const&);
    River();

public:
    // NOLINTBEGIN
    MCAPI bool operator()(struct OperationNodeDetails::NeighborhoodReader<int, 1, 1>& reader) const;

    // NOLINTEND
};

}; // namespace OperationNodeFilters
