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
// symbol:
// ?_buildSurface@Utils@VanillaSurfaceBuilders@@YAXAEBUSurfaceMaterialBlocks@@PEBVBlock@@AEBUSurfaceMaterialAdjustmentEvaluated@@AEAVRandom@@AEAVBlockVolume@@AEBVBlockPos@@FH_NW4WaterLevelStrategy@ISurfaceBuilder@@HAEBVHeightmapWrapper@@_N@Z
MCAPI void _buildSurface(
    struct SurfaceMaterialBlocks const&,
    class Block const*,
    struct SurfaceMaterialAdjustmentEvaluated const&,
    class Random&         random,
    class BlockVolume&    blocks,
    class BlockPos const& pos,
    short                 seaLevel,
    int,
    bool,
    ::ISurfaceBuilder::WaterLevelStrategy,
    int,
    class HeightmapWrapper const&,
    bool
);

// symbol: ?buildSurface@Utils@VanillaSurfaceBuilders@@YAXAEBUBuildParameters@ISurfaceBuilder@@@Z
MCAPI void buildSurface(struct ISurfaceBuilder::BuildParameters const&);

// symbol: ?ensureValidSurfaceMaterials@Utils@VanillaSurfaceBuilders@@YAXAEAUSurfaceMaterialAttributes@@@Z
MCAPI void ensureValidSurfaceMaterials(struct SurfaceMaterialAttributes& surfaceMaterials);

// symbol: ?findGroundHeight@Utils@VanillaSurfaceBuilders@@YAFAEBVBlockVolume@@VPos@@AEBVHeightmapWrapper@@@Z
MCAPI short findGroundHeight(class BlockVolume const& blocks, class Pos p, class HeightmapWrapper const&);

// symbol:
// ?isSteepTerrain@Utils@VanillaSurfaceBuilders@@YA_NAEBVBlockVolume@@AEBVBlockPos@@AEBUSteepMaterial@MountainAttributes@@AEBVHeightmapWrapper@@@Z
MCAPI bool
isSteepTerrain(class BlockVolume const& blocks, class BlockPos const& pos, struct MountainAttributes::SteepMaterial const&, class HeightmapWrapper const&);

// symbol: ?placeBedrockCeiling@Utils@VanillaSurfaceBuilders@@YAXAEAVRandom@@AEAVBlockVolume@@AEBVBlockPos@@@Z
MCAPI void placeBedrockCeiling(class Random& random, class BlockVolume& blocks, class BlockPos const& pos);

// symbol: ?placeBedrockFloor@Utils@VanillaSurfaceBuilders@@YAXAEAVRandom@@AEAVBlockVolume@@AEBVBlockPos@@@Z
MCAPI void placeBedrockFloor(class Random& random, class BlockVolume& blocks, class BlockPos const& pos);
// NOLINTEND

}; // namespace VanillaSurfaceBuilders::Utils
