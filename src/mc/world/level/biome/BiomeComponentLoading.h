#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BiomeComponentLoading {
// NOLINTBEGIN
MCAPI void _read(
    std::string const&                                name,
    class CompoundTag const&                          tag,
    std::vector<std::pair<class Biome const*, uint>>& biomes,
    class IWorldRegistriesProvider&                   lookupProvider
);

MCAPI void
_write(std::string const& name, class CompoundTag& tag, std::vector<std::pair<class Biome const*, uint>> const& biomes);
// NOLINTEND

}; // namespace BiomeComponentLoading
