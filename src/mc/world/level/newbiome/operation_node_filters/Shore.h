#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/operation_node_filters/FilterBase.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
// clang-format on

namespace OperationNodeFilters {

class Shore : public ::OperationNodeFilters::FilterBase<3, 3, ::Biome const*, ::Biome const*> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Biome const*>                 mDefaultShore;
    ::ll::TypedStorage<8, 24, ::std::vector<::Biome const*>> mOceanBiomes;
    // NOLINTEND

public:
    // prevent constructor by default
    Shore();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Shore(::BiomeRegistry const& registry, ::Biome const& defaultShore);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BiomeRegistry const& registry, ::Biome const& defaultShore);
    // NOLINTEND
};

} // namespace OperationNodeFilters
