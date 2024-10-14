#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"
#include "mc/world/level/block/BlockColor.h"

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
    // vIndex: 0
    virtual ~MesaSurfaceBuilder() = default;

    // vIndex: 1
    virtual void init(class Biome& biome, uint levelSeed);

    // vIndex: 2
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const& parameters) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _buildSurface(
        class BlockPos const&               pos,
        float                               depthValue,
        class Random&                       random,
        class BlockVolume&                  blockVolume,
        int                                 lowerLimit,
        short                               seaLevel,
        struct MesaSurfaceBlocks const&     mesaPalette,
        struct SurfaceMaterialBlocks const& blockPalette,
        float                               extensionTop
    ) const;

    MCAPI void _init(uint levelSeed);

    MCAPI void generateBands(class Random& random);

    MCAPI ::BlockColor getBand(int worldX, int y, int worldZ) const;

    MCAPI void makeBands(class Random& random, int baseWidth, ::BlockColor color);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void buildSurfaceAt$(struct ISurfaceBuilder::BuildParameters const& parameters) const;

    MCAPI void init$(class Biome& biome, uint levelSeed);

    // NOLINTEND
};

}; // namespace VanillaSurfaceBuilders
