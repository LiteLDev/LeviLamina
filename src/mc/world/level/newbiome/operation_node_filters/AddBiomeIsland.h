#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/operation_node_filters/FilterBase.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

namespace OperationNodeFilters {

class AddBiomeIsland : public ::OperationNodeFilters::FilterBase<3, 3, ::Biome const*, ::Biome const*> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Biome const*>                 mDefaultIsland;
    ::ll::TypedStorage<8, 8, ::Biome const*>                 mSpecialIsland;
    ::ll::TypedStorage<8, 24, ::std::vector<::Biome const*>> mShallowOceanBiomes;
    // NOLINTEND
};

} // namespace OperationNodeFilters
