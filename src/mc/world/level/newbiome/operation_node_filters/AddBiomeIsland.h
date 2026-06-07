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

class AddBiomeIsland : public ::OperationNodeFilters::FilterBase<3, 3, ::Biome const*, ::Biome const*> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Biome const*>                 mDefaultIsland;
    ::ll::TypedStorage<8, 8, ::Biome const*>                 mSpecialIsland;
    ::ll::TypedStorage<8, 24, ::std::vector<::Biome const*>> mShallowOceanBiomes;
    // NOLINTEND

public:
    // prevent constructor by default
    AddBiomeIsland();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AddBiomeIsland(
        ::BiomeRegistry const& biomeRegistry,
        ::Biome const&         defaultIslandBiome,
        ::Biome const&         specialIslandBiome
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::BiomeRegistry const& biomeRegistry, ::Biome const& defaultIslandBiome, ::Biome const& specialIslandBiome);
    // NOLINTEND
};

} // namespace OperationNodeFilters
