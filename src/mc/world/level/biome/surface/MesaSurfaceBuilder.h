#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"
#include "mc/world/level/block/utils/BlockColor.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BlockPos;
class BlockVolume;
class ISurfaceBuilder;
class Random;
struct MesaSurfaceBlocks;
struct SurfaceMaterialBlocks;
// clang-format on

namespace VanillaSurfaceBuilders {

class MesaSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // prevent constructor by default
    MesaSurfaceBuilder& operator=(MesaSurfaceBuilder const&);
    MesaSurfaceBuilder(MesaSurfaceBuilder const&);
    MesaSurfaceBuilder();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MesaSurfaceBuilder@VanillaSurfaceBuilders@@UEAA@XZ
    virtual ~MesaSurfaceBuilder() = default;

    // vIndex: 1, symbol: ?init@MesaSurfaceBuilder@VanillaSurfaceBuilders@@UEAAXAEAVBiome@@I@Z
    virtual void init(class Biome&, uint);

    // vIndex: 2, symbol:
    // ?buildSurfaceAt@MesaSurfaceBuilder@VanillaSurfaceBuilders@@UEBAXAEBUBuildParameters@ISurfaceBuilder@@@Z
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const& parameters) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_buildSurface@MesaSurfaceBuilder@VanillaSurfaceBuilders@@AEBAXAEBVBlockPos@@MAEAVRandom@@AEAVBlockVolume@@HFAEBUMesaSurfaceBlocks@@AEBUSurfaceMaterialBlocks@@M@Z
    MCAPI void _buildSurface(
        class BlockPos const& pos,
        float                 depthValue,
        class Random&         random,
        class BlockVolume&    blockVolume,
        int,
        short seaLevel,
        struct MesaSurfaceBlocks const&,
        struct SurfaceMaterialBlocks const& blockPalette,
        float
    ) const;

    // symbol: ?_init@MesaSurfaceBuilder@VanillaSurfaceBuilders@@AEAAXI@Z
    MCAPI void _init(uint levelSeed);

    // symbol: ?generateBands@MesaSurfaceBuilder@VanillaSurfaceBuilders@@AEAAXAEAVRandom@@@Z
    MCAPI void generateBands(class Random& random);

    // symbol: ?getBand@MesaSurfaceBuilder@VanillaSurfaceBuilders@@AEBA?AW4BlockColor@@HHH@Z
    MCAPI ::BlockColor getBand(int worldX, int y, int worldZ) const;

    // symbol: ?makeBands@MesaSurfaceBuilder@VanillaSurfaceBuilders@@AEAAXAEAVRandom@@HW4BlockColor@@@Z
    MCAPI void makeBands(class Random& random, int, ::BlockColor color);

    // NOLINTEND
};

}; // namespace VanillaSurfaceBuilders
