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
    PromoteCenter& operator=(PromoteCenter const&);
    PromoteCenter(PromoteCenter const&);
    PromoteCenter();

public:
    // NOLINTBEGIN
    // symbol: ??0PromoteCenter@OperationNodeFilters@@QEAA@AEBVBiome@@0@Z
    MCAPI PromoteCenter(class Biome const&, class Biome const&);

    // symbol:
    // ??RPromoteCenter@OperationNodeFilters@@QEBAPEBVBiome@@AEAU?$NeighborhoodReader@PEBVBiome@@$00$00@OperationNodeDetails@@@Z
    MCAPI class Biome const*
    operator()(struct OperationNodeDetails::NeighborhoodReader<class Biome const*, 1, 1>& reader) const;

    // NOLINTEND
};

}; // namespace OperationNodeFilters
