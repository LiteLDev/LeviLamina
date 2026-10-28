#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class BlockVolume;
class Random;
struct SurfaceMaterialAttributes;
// clang-format on

namespace VanillaSurfaceBuilders::Utils {
// functions
// NOLINTBEGIN
MCAPI void buildSurface(
    ::ISurfaceBuilder::GlobalParameters const&         globalParams,
    ::ISurfaceBuilder::SurfaceBuilderParameters const& surfaceBuilderParams,
    ::ISurfaceBuilder::PerColumnParameters const&      columnParams
);

MCAPI void ensureValidSurfaceMaterials(::SurfaceMaterialAttributes& surfaceMaterials);

MCAPI void placeBedrockCeilingInChunk(::Random& random, ::BlockVolume& blocks);

MCAPI void placeBedrockFloorInChunk(::Random& random, ::BlockVolume& blocks);
// NOLINTEND

} // namespace VanillaSurfaceBuilders::Utils
