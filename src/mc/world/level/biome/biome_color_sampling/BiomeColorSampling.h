#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/biome_color_sampling/Pattern.h"
#include "mc/world/level/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace BiomeColorSampling { class MapPolicy; }
namespace BiomeColorSampling { class TessellationPolicy; }
// clang-format on

namespace BiomeColorSampling {
// functions
// NOLINTBEGIN
MCAPI ::BiomeColorSampling::MapPolicy const& getMapPolicy(::TintMethod tint);

#ifdef LL_PLAT_C
MCAPI ::std::vector<::BlockPos> const& getPattern(::BiomeColorSampling::Pattern pattern);

MCAPI ::BiomeColorSampling::TessellationPolicy const& getTessellationPolicy(::TintMethod tint);
#endif
// NOLINTEND

} // namespace BiomeColorSampling
