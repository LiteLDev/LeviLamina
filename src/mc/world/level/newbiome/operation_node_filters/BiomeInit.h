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

public:
    // prevent constructor by default
    BiomeInit();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BiomeInit(
        ::BiomeRegistry const& registry,
        ::Biome const&         defaultOceanBiome,
        ::Biome const&         fallbackBiome,
        ::GeneratorType        generator
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::BiomeRegistry const& registry,
        ::Biome const&         defaultOceanBiome,
        ::Biome const&         fallbackBiome,
        ::GeneratorType        generator
    );
    // NOLINTEND
};

} // namespace OperationNodeFilters
