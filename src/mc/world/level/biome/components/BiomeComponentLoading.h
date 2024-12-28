#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
class CompoundTag;
class IWorldRegistriesProvider;
// clang-format on

namespace BiomeComponentLoading {
// functions
// NOLINTBEGIN
MCAPI void _read(
    ::std::string const&                              name,
    ::CompoundTag const&                              tag,
    ::std::vector<::std::pair<::Biome const*, uint>>& biomes,
    ::IWorldRegistriesProvider&                       lookupProvider
);

MCAPI void
_write(::std::string const& name, ::CompoundTag& tag, ::std::vector<::std::pair<::Biome const*, uint>> const& biomes);
// NOLINTEND

} // namespace BiomeComponentLoading
