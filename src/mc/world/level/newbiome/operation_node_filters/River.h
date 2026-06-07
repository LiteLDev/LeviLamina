#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/operation_node_details/NeighborhoodReader.h"
#include "mc/world/level/newbiome/operation_node_filters/FilterBase.h"

namespace OperationNodeFilters {

struct River : public ::OperationNodeFilters::FilterBase<3, 3, bool, int> {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator()(::OperationNodeDetails::NeighborhoodReader<int, 1, 1>& reader) const;
    // NOLINTEND
};

} // namespace OperationNodeFilters
