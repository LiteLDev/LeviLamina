#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
// clang-format on

namespace OperationNodeFilters {

struct AddMushroomIsland {
public:
    // prevent constructor by default
    AddMushroomIsland& operator=(AddMushroomIsland const&);
    AddMushroomIsland(AddMushroomIsland const&);
    AddMushroomIsland();

public:
    // NOLINTBEGIN
    // symbol: ??0AddMushroomIsland@OperationNodeFilters@@QEAA@AEBVBiome@@AEBVBiomeRegistry@@@Z
    MCAPI AddMushroomIsland(class Biome const& mushroomBiome, class BiomeRegistry const& biomeRegistry);

    // NOLINTEND
};

}; // namespace OperationNodeFilters
