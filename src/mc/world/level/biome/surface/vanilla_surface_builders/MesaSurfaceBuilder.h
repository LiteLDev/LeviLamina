#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BlockPos;
class BlockVolume;
class Random;
struct MesaSurfaceBlocks;
struct SurfaceMaterialBlocks;
// clang-format on

namespace VanillaSurfaceBuilders {

class MesaSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 192> mUnkb18397;
    ::ll::UntypedStorage<8, 8>   mUnkf7ddfa;
    // NOLINTEND

public:
    // prevent constructor by default
    MesaSurfaceBuilder& operator=(MesaSurfaceBuilder const&);
    MesaSurfaceBuilder(MesaSurfaceBuilder const&);
    MesaSurfaceBuilder();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initBuilder(uint levelSeed) /*override*/;

    virtual void initBiomeSurface(::Biome& biome) const /*override*/;

    virtual bool isBestBuilder(::Biome const& biome) const /*override*/;

    virtual void buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters) const /*override*/;

    virtual ~MesaSurfaceBuilder() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _buildSurface(
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

    MCNAPI void _init(uint levelSeed);

    MCNAPI void generateBands(::Random& random);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initBuilder(uint levelSeed);

    MCNAPI void $initBiomeSurface(::Biome& biome) const;

    MCNAPI bool $isBestBuilder(::Biome const& biome) const;

    MCNAPI void $buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace VanillaSurfaceBuilders
