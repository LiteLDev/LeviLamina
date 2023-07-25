#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/vanilla/MountainAttributes.h"
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

namespace VanillaSurfaceBuilders::Utils {
/**
 * @symbol
 * ?_buildSurface\@Utils\@VanillaSurfaceBuilders\@\@YAXAEBUSurfaceMaterialBlocks\@\@PEBVBlock\@\@AEBUSurfaceMaterialAdjustmentEvaluated\@\@AEAVRandom\@\@AEAVBlockVolume\@\@AEBVBlockPos\@\@FH_NW4WaterLevelStrategy\@ISurfaceBuilder\@\@HAEBVHeightmapWrapper\@\@_N\@Z
 */
MCAPI void _buildSurface(
    struct SurfaceMaterialBlocks const&,
    class Block const*,
    struct SurfaceMaterialAdjustmentEvaluated const&,
    class Random&,
    class BlockVolume&,
    class BlockPos const&,
    short,
    int,
    bool,
    enum class ISurfaceBuilder::WaterLevelStrategy,
    int,
    class HeightmapWrapper const&,
    bool
);
/**
 * @symbol ?buildSurface\@Utils\@VanillaSurfaceBuilders\@\@YAXAEBUBuildParameters\@ISurfaceBuilder\@\@\@Z
 */
MCAPI void buildSurface(struct ISurfaceBuilder::BuildParameters const&);
/**
 * @symbol ?ensureValidSurfaceMaterials\@Utils\@VanillaSurfaceBuilders\@\@YAXAEAUSurfaceMaterialAttributes\@\@\@Z
 */
MCAPI void ensureValidSurfaceMaterials(struct SurfaceMaterialAttributes&);
/**
 * @symbol ?findGroundHeight\@Utils\@VanillaSurfaceBuilders\@\@YAFAEBVBlockVolume\@\@VPos\@\@AEBVHeightmapWrapper\@\@\@Z
 */
MCAPI short findGroundHeight(class BlockVolume const&, class Pos, class HeightmapWrapper const&);
/**
 * @symbol
 * ?isSteepTerrain\@Utils\@VanillaSurfaceBuilders\@\@YA_NAEBVBlockVolume\@\@AEBVBlockPos\@\@AEBUSteepMaterial\@MountainAttributes\@\@AEBVHeightmapWrapper\@\@\@Z
 */
MCAPI bool
isSteepTerrain(class BlockVolume const&, class BlockPos const&, struct MountainAttributes::SteepMaterial const&, class HeightmapWrapper const&);
/**
 * @symbol
 * ?placeBedrockCeiling\@Utils\@VanillaSurfaceBuilders\@\@YAXAEAVRandom\@\@AEAVBlockVolume\@\@AEBVBlockPos\@\@\@Z
 */
MCAPI void placeBedrockCeiling(class Random&, class BlockVolume&, class BlockPos const&);
/**
 * @symbol ?placeBedrockFloor\@Utils\@VanillaSurfaceBuilders\@\@YAXAEAVRandom\@\@AEAVBlockVolume\@\@AEBVBlockPos\@\@\@Z
 */
MCAPI void placeBedrockFloor(class Random&, class BlockVolume&, class BlockPos const&);

}; // namespace VanillaSurfaceBuilders::Utils
