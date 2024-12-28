#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/operation_node_filters/FilterBase.h"
#include "mc/world/level/newbiome/operation_node_values/Terrain.h"

// auto generated forward declare list
// clang-format off
namespace OperationNodeValues { struct PreBiome; }
// clang-format on

namespace OperationNodeFilters {

struct AddSnow
: public ::OperationNodeFilters::FilterBase<1, 1, ::OperationNodeValues::PreBiome, ::OperationNodeValues::Terrain> {
public:
    // prevent constructor by default
    AddSnow& operator=(AddSnow const&);
    AddSnow(AddSnow const&);
    AddSnow();
};

} // namespace OperationNodeFilters
