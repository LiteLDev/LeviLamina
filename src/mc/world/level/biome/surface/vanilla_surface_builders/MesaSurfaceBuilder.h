#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"
#include "mc/world/level/block/BlockColor.h"
#include "mc/world/level/levelgen/synth/MesaSurfaceBuilderNoises.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockVolume;
class MesaSurfaceBuilderNoises;
class Random;
class SurfaceBuilderData;
struct MesaSurfaceBlocks;
struct SurfaceMaterialBlocks;
// clang-format on

namespace VanillaSurfaceBuilders {

class MesaSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 192, ::std::array<::BlockColor, 192>>             mColorBands;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MesaSurfaceBuilderNoises>> mNoises;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initBuilder(uint levelSeed) /*override*/;

    virtual void initBiomeSurface(::SurfaceBuilderData& surfaceBuilderData) const /*override*/;

    virtual bool isBestBuilder(::SurfaceBuilderData const& surfaceBuilderData) const /*override*/;

    virtual void buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _buildSurface(
        ::BlockPos const&              pos,
        float                          depthValue,
        ::Random&                      random,
        ::BlockVolume&                 blockVolume,
        int                            lowerLimit,
        short                          seaLevel,
        ::MesaSurfaceBlocks const&     mesaPalette,
        ::SurfaceMaterialBlocks const& blockPalette,
        float                          extensionTop
    ) const;

    MCAPI void _init(uint levelSeed);

    MCAPI void generateBands(::Random& random);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initBuilder(uint levelSeed);

    MCFOLD void $initBiomeSurface(::SurfaceBuilderData& surfaceBuilderData) const;

    MCFOLD bool $isBestBuilder(::SurfaceBuilderData const& surfaceBuilderData) const;

    MCAPI void $buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace VanillaSurfaceBuilders
