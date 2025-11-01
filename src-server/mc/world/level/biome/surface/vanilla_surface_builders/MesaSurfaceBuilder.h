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
class MesaSurfaceBuilderNoises;
class Random;
struct MesaSurfaceBlocks;
struct SurfaceMaterialBlocks;
// clang-format on

namespace VanillaSurfaceBuilders {

class MesaSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 192, ::std::array<::BlockColor, 192>> mColorBands;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MesaSurfaceBuilderNoises>> mNoises;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void initBuilder(uint levelSeed) /*override*/;

    // vIndex: 2
    virtual void initBiomeSurface(::Biome& biome) const /*override*/;

    // vIndex: 3
    virtual bool isBestBuilder(::Biome const& biome) const /*override*/;

    // vIndex: 4
    virtual void buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters) const /*override*/;

    // vIndex: 0
    virtual ~MesaSurfaceBuilder() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _buildSurface(::BlockPos const& pos, float depthValue, ::Random& random, ::BlockVolume& blockVolume, int lowerLimit, short seaLevel, ::MesaSurfaceBlocks const& mesaPalette, ::SurfaceMaterialBlocks const& blockPalette, float extensionTop) const;

    MCAPI void _init(uint levelSeed);

    MCAPI void generateBands(::Random& random);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initBuilder(uint levelSeed);

    MCFOLD void $initBiomeSurface(::Biome& biome) const;

    MCFOLD bool $isBestBuilder(::Biome const& biome) const;

    MCAPI void $buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
