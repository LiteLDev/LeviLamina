#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
// clang-format on

namespace OperationNodeFilters {

class AddBiomeIsland {
public:
    // prevent constructor by default
    AddBiomeIsland& operator=(AddBiomeIsland const&);
    AddBiomeIsland(AddBiomeIsland const&);
    AddBiomeIsland();

public:
    // NOLINTBEGIN
    // symbol: ??0AddBiomeIsland@OperationNodeFilters@@QEAA@AEBVBiomeRegistry@@AEBVBiome@@1@Z
    MCAPI AddBiomeIsland(
        class BiomeRegistry const& biomeRegistry,
        class Biome const&         defaultIslandBiome,
        class Biome const&         specialIslandBiome
    );

    // NOLINTEND
};

}; // namespace OperationNodeFilters
