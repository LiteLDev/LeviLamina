#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/GeneratorType.h"

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
    // symbol: ??0BiomeInit@OperationNodeFilters@@QEAA@AEBVBiomeRegistry@@AEAVBiome@@1W4GeneratorType@@@Z
    MCAPI BiomeInit(class BiomeRegistry const&, class Biome&, class Biome&, ::GeneratorType);

    // NOLINTEND
};

}; // namespace OperationNodeFilters
