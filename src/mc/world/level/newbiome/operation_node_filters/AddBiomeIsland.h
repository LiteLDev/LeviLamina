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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    AddBiomeIsland();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI AddBiomeIsland(
        ::BiomeRegistry const& biomeRegistry,
        ::Biome const&         defaultIslandBiome,
        ::Biome const&         specialIslandBiome
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void*
    $ctor(::BiomeRegistry const& biomeRegistry, ::Biome const& defaultIslandBiome, ::Biome const& specialIslandBiome);
#endif
    // NOLINTEND
};

} // namespace OperationNodeFilters
