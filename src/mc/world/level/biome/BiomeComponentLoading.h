#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BiomeComponentLoading {
/**
 * @symbol
 * ?_read\@BiomeComponentLoading\@\@YAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@AEAV?$vector\@U?$pair\@PEAVBiome\@\@I\@std\@\@V?$allocator\@U?$pair\@PEAVBiome\@\@I\@std\@\@\@2\@\@3\@AEAVIWorldRegistriesProvider\@\@\@Z
 */
MCAPI void
_read(std::string const&, class CompoundTag const&, std::vector<struct std::pair<class Biome*, unsigned int>>&, class IWorldRegistriesProvider&);
/**
 * @symbol
 * ?_write\@BiomeComponentLoading\@\@YAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVCompoundTag\@\@AEBV?$vector\@U?$pair\@PEAVBiome\@\@I\@std\@\@V?$allocator\@U?$pair\@PEAVBiome\@\@I\@std\@\@\@2\@\@3\@\@Z
 */
MCAPI void
_write(std::string const&, class CompoundTag&, std::vector<struct std::pair<class Biome*, unsigned int>> const&);

}; // namespace BiomeComponentLoading
