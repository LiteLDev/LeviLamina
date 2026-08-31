#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/operation_node_filters/FilterBase.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

namespace OperationNodeFilters {

class RareBiomeSpot : public ::OperationNodeFilters::FilterBase<1, 1, ::Biome const*, ::Biome const*> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>           mChance;
    ::ll::TypedStorage<8, 8, ::Biome const*> mFromBiome;
    ::ll::TypedStorage<8, 8, ::Biome const*> mToBiome;
    // NOLINTEND
};

} // namespace OperationNodeFilters
