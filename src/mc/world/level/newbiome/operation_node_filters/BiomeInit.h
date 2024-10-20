#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/GeneratorType.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
// clang-format on

namespace OperationNodeFilters {

class BiomeInit {
public:
    // prevent constructor by default
    BiomeInit& operator=(BiomeInit const&);
    BiomeInit(BiomeInit const&);
    BiomeInit();

public:
    // NOLINTBEGIN
    MCAPI BiomeInit(
        class BiomeRegistry const& registry,
        class Biome const&         defaultOceanBiome,
        class Biome const&         fallbackBiome,
        ::GeneratorType            generator
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(
        class BiomeRegistry const& registry,
        class Biome const&         defaultOceanBiome,
        class Biome const&         fallbackBiome,
        ::GeneratorType            generator
    );

    // NOLINTEND
};

}; // namespace OperationNodeFilters
