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
// NOLINTBEGIN
MCAPI void _buildSurface(
    struct SurfaceMaterialBlocks const&              initialBlockPalette,
    class Block const*                               steepBlock,
    struct SurfaceMaterialAdjustmentEvaluated const& evaluatedAdjustments,
    class Random&                                    random,
    class BlockVolume&                               blocks,
    class BlockPos const&                            pos,
    short                                            seaLevel,
    int                                              runDepth,
    bool                                             coldEnoughForIce,
    ::ISurfaceBuilder::WaterLevelStrategy            waterLevelStrategy,
    int                                              lowerLimit,
    class HeightmapWrapper const&                    preWorldGenHeightmap,
    bool                                             useCCOrLater
);

MCAPI void buildSurface(struct ISurfaceBuilder::BuildParameters const& buildParameters);

MCAPI void ensureValidSurfaceMaterials(struct SurfaceMaterialAttributes& surfaceMaterials);

MCAPI short
findGroundHeight(class BlockVolume const& blocks, class Pos p, class HeightmapWrapper const& preWorldGenHeightmap);

MCAPI bool isSteepTerrain(
    class BlockVolume const&                        blocks,
    class BlockPos const&                           pos,
    struct MountainAttributes::SteepMaterial const& steepMaterial,
    class HeightmapWrapper const&                   preWorldGenHeightmap
);

MCAPI void placeBedrockCeiling(class Random& random, class BlockVolume& blocks, class BlockPos const& pos);

MCAPI void placeBedrockFloor(class Random& random, class BlockVolume& blocks, class BlockPos const& pos);
// NOLINTEND

}; // namespace VanillaSurfaceBuilders::Utils
