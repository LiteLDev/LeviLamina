#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/operation_node_filters/FilterBase.h"
#include "mc/world/level/newbiome/operation_node_values/Terrain.h"

namespace OperationNodeFilters {

struct RemoveTooMuchOcean
: public ::OperationNodeFilters::FilterBase<3, 3, ::OperationNodeValues::Terrain, ::OperationNodeValues::Terrain> {
public:
    // prevent constructor by default
    RemoveTooMuchOcean& operator=(RemoveTooMuchOcean const&);
    RemoveTooMuchOcean(RemoveTooMuchOcean const&);
    RemoveTooMuchOcean();
};

} // namespace OperationNodeFilters
