#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/vanilla/MountainAttributes.h"
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockVolume;
class HeightmapWrapper;
class Random;
struct SurfaceMaterialAdjustmentEvaluated;
struct SurfaceMaterialAttributes;
struct SurfaceMaterialBlocks;
// clang-format on

namespace VanillaSurfaceBuilders::Utils {
// functions
// NOLINTBEGIN
MCAPI void _buildSurface(
    ::SurfaceMaterialBlocks const&              initialBlockPalette,
    ::Block const*                              steepBlock,
    ::SurfaceMaterialAdjustmentEvaluated const& evaluatedAdjustments,
    ::Random&                                   random,
    ::BlockVolume&                              blocks,
    ::BlockPos const&                           pos,
    short                                       seaLevel,
    int                                         runDepth,
    bool                                        coldEnoughForIce,
    ::ISurfaceBuilder::WaterLevelStrategy       waterLevelStrategy,
    int                                         lowerLimit,
    ::HeightmapWrapper const&                   preWorldGenHeightmap,
    bool                                        useCCOrLater
);

MCAPI void buildSurface(::ISurfaceBuilder::BuildParameters const& buildParameters);

MCAPI void ensureValidSurfaceMaterials(::SurfaceMaterialAttributes& surfaceMaterials);

MCAPI bool isSteepTerrain(
    ::BlockVolume const&                       blocks,
    ::BlockPos const&                          pos,
    ::MountainAttributes::SteepMaterial const& steepMaterial,
    ::HeightmapWrapper const&                  preWorldGenHeightmap
);

MCAPI void placeBedrockCeiling(::Random& random, ::BlockVolume& blocks, ::BlockPos const& pos);

MCAPI void placeBedrockFloor(::Random& random, ::BlockVolume& blocks, ::BlockPos const& pos);
// NOLINTEND

} // namespace VanillaSurfaceBuilders::Utils
