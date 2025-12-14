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
MCAPI int getMapBirchFoliageColor(::Biome const& biome, ::BlockPos const&);

MCAPI int getMapDefaultFoliageColor(::Biome const& biome, ::BlockPos const&);

MCAPI int getMapDryFoliageColor(::Biome const& biome, ::BlockPos const&);

MCAPI int getMapEvergreenFoliageColor(::Biome const& biome, ::BlockPos const&);

MCAPI int getMapGrassColor(::Biome const& biome, ::BlockPos const& pos);

MCAPI ::BiomeColorSampling::MapPolicy const& getMapPolicy(::TintMethod tint);

MCFOLD int getMapWaterColor(::Biome const& biome, ::BlockPos const&);

MCAPI ::std::vector<::BlockPos> const& getPattern(::BiomeColorSampling::Pattern pattern);

MCAPI_C ::BiomeColorSampling::TessellationPolicy const& getTessellationPolicy(::TintMethod tint);

MCAPI_C int getWaterColor(::Biome const& biome, ::BlockPos const&);

MCFOLD_C int getWhite(::Biome const&, ::BlockPos const&);
// NOLINTEND

} // namespace BiomeColorSampling
