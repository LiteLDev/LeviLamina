#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/biome_color_sampling/Pattern.h"
#include "mc/world/level/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BlockPos;
namespace BiomeColorSampling { class MapPolicy; }
// clang-format on

namespace BiomeColorSampling {
// functions
// NOLINTBEGIN
MCNAPI int getMapBirchFoliageColor(::Biome const& biome, ::BlockPos const&);

MCNAPI int getMapDefaultFoliageColor(::Biome const& biome, ::BlockPos const&);

MCNAPI int getMapDryFoliageColor(::Biome const& biome, ::BlockPos const&);

MCNAPI int getMapEvergreenFoliageColor(::Biome const& biome, ::BlockPos const&);

MCNAPI int getMapGrassColor(::Biome const& biome, ::BlockPos const& pos);

MCNAPI ::BiomeColorSampling::MapPolicy const& getMapPolicy(::TintMethod tint);

MCNAPI int getMapWaterColor(::Biome const& biome, ::BlockPos const&);

MCNAPI ::std::vector<::BlockPos> const& getPattern(::BiomeColorSampling::Pattern pattern);
// NOLINTEND

} // namespace BiomeColorSampling
