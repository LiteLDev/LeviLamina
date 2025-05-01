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
class Pos;
class Random;
struct SurfaceMaterialAdjustmentEvaluated;
struct SurfaceMaterialAttributes;
struct SurfaceMaterialBlocks;
// clang-format on

namespace VanillaSurfaceBuilders::Utils {
// functions
// NOLINTBEGIN
MCNAPI void _buildSurface(
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

MCNAPI void buildSurface(::ISurfaceBuilder::BuildParameters const& buildParameters);

MCNAPI void ensureValidSurfaceMaterials(::SurfaceMaterialAttributes& surfaceMaterials);

MCNAPI short findGroundHeight(::BlockVolume const& blocks, ::Pos p, ::HeightmapWrapper const& preWorldGenHeightmap);

MCNAPI bool isSteepTerrain(
    ::BlockVolume const&                       blocks,
    ::BlockPos const&                          pos,
    ::MountainAttributes::SteepMaterial const& steepMaterial,
    ::HeightmapWrapper const&                  preWorldGenHeightmap
);
// NOLINTEND

} // namespace VanillaSurfaceBuilders::Utils
