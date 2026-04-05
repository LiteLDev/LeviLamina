#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/GeneratorType.h"
#include "mc/world/level/newbiome/operation_node_filters/FilterBase.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
namespace OperationNodeValues { struct PreBiome; }
// clang-format on

namespace OperationNodeFilters {

class BiomeInit : public ::OperationNodeFilters::FilterBase<1, 1, ::Biome const*, ::OperationNodeValues::PreBiome> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Biome const*>                                        mFallbackBiome;
    ::ll::TypedStorage<8, 8, ::Biome const*>                                        mDefaultOcean;
    ::ll::TypedStorage<8, 120, ::std::vector<::std::pair<::Biome const*, uint>>[5]> mRegularBiomes;
    ::ll::TypedStorage<8, 120, ::std::vector<::std::pair<::Biome const*, uint>>[5]> mSpecialBiomes;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    BiomeInit();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI BiomeInit(
        ::BiomeRegistry const& registry,
        ::Biome const&         defaultOceanBiome,
        ::Biome const&         fallbackBiome,
        ::GeneratorType        generator
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::BiomeRegistry const& registry,
        ::Biome const&         defaultOceanBiome,
        ::Biome const&         fallbackBiome,
        ::GeneratorType        generator
    );
#endif
    // NOLINTEND
};

} // namespace OperationNodeFilters
