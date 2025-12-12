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
namespace BiomeColorSampling { struct TessellationPolicy; }
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

MCNAPI_C ::BiomeColorSampling::TessellationPolicy const& getTessellationPolicy(::TintMethod tint);

MCNAPI_C int getWaterColor(::Biome const& biome, ::BlockPos const&);

MCNAPI_C int getWhite(::Biome const&, ::BlockPos const&);
// NOLINTEND

} // namespace BiomeColorSampling
