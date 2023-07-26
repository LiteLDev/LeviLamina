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
    AddMushroomIsland& operator=(AddMushroomIsland const&) = delete;
    AddMushroomIsland(AddMushroomIsland const&)            = delete;
    AddMushroomIsland()                                    = delete;

public:
    /**
     * @symbol ??0AddMushroomIsland\@OperationNodeFilters\@\@QEAA\@AEAVBiome\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI AddMushroomIsland(class Biome&, class BiomeRegistry const&); // NOLINT
};

}; // namespace OperationNodeFilters
