#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/NeighborhoodReader.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

namespace OperationNodeFilters {

class PromoteCenter {

public:
    // prevent constructor by default
    PromoteCenter& operator=(PromoteCenter const&) = delete;
    PromoteCenter(PromoteCenter const&)            = delete;
    PromoteCenter()                                = delete;

public:
    /**
     * @symbol ??0PromoteCenter\@OperationNodeFilters\@\@QEAA\@AEAVBiome\@\@0\@Z
     */
    MCAPI PromoteCenter(class Biome&, class Biome&); // NOLINT
    /**
     * @symbol
     * ??RPromoteCenter\@OperationNodeFilters\@\@QEBAPEAVBiome\@\@AEAU?$NeighborhoodReader\@PEAVBiome\@\@$00$00\@OperationNodeDetails\@\@\@Z
     */
    MCAPI class Biome* operator()(struct OperationNodeDetails::NeighborhoodReader<class Biome*, 1, 1>&) const; // NOLINT
};

}; // namespace OperationNodeFilters
