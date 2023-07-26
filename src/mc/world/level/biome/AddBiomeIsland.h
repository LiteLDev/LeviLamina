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
    AddBiomeIsland& operator=(AddBiomeIsland const&) = delete;
    AddBiomeIsland(AddBiomeIsland const&)            = delete;
    AddBiomeIsland()                                 = delete;

public:
    /**
     * @symbol ??0AddBiomeIsland\@OperationNodeFilters\@\@QEAA\@AEBVBiomeRegistry\@\@AEAVBiome\@\@1\@Z
     */
    MCAPI AddBiomeIsland(class BiomeRegistry const&, class Biome&, class Biome&); // NOLINT
};

}; // namespace OperationNodeFilters
