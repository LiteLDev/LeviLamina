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
    ::ll::UntypedStorage<8, 8>   mUnka14c77;
    ::ll::UntypedStorage<8, 8>   mUnk7cb23c;
    ::ll::UntypedStorage<8, 120> mUnk8fe92a;
    ::ll::UntypedStorage<8, 120> mUnk9dd7ed;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeInit& operator=(BiomeInit const&);
    BiomeInit(BiomeInit const&);
    BiomeInit();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BiomeInit(
        ::BiomeRegistry const& registry,
        ::Biome const&         defaultOceanBiome,
        ::Biome const&         fallbackBiome,
        ::GeneratorType        generator
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::BiomeRegistry const& registry,
        ::Biome const&         defaultOceanBiome,
        ::Biome const&         fallbackBiome,
        ::GeneratorType        generator
    );
    // NOLINTEND
};

} // namespace OperationNodeFilters
