#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BiomeComponentLoading {
// NOLINTBEGIN
// symbol:
// ?_read@BiomeComponentLoading@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@AEAV?$vector@U?$pair@PEBVBiome@@I@std@@V?$allocator@U?$pair@PEBVBiome@@I@std@@@2@@3@AEAVIWorldRegistriesProvider@@@Z
MCAPI void _read(
    std::string const&                                name,
    class CompoundTag const&                          tag,
    std::vector<std::pair<class Biome const*, uint>>& biomes,
    class IWorldRegistriesProvider&                   lookupProvider
);

// symbol:
// ?_write@BiomeComponentLoading@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVCompoundTag@@AEBV?$vector@U?$pair@PEBVBiome@@I@std@@V?$allocator@U?$pair@PEBVBiome@@I@std@@@2@@3@@Z
MCAPI void
_write(std::string const& name, class CompoundTag& tag, std::vector<std::pair<class Biome const*, uint>> const& biomes);
// NOLINTEND

}; // namespace BiomeComponentLoading
