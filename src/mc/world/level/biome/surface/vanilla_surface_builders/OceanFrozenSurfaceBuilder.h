#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class Block;
class FrozenOceanBuilderNoises;
class LevelSeed64;
class SurfaceBuilderData;
// clang-format on

namespace VanillaSurfaceBuilders {

class OceanFrozenSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FrozenOceanBuilderNoises>> mNoises;
    ::ll::TypedStorage<8, 8, ::Block const&>                                mPackedIceBlock;
    ::ll::TypedStorage<8, 8, ::Block const&>                                mSnowBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    OceanFrozenSurfaceBuilder& operator=(OceanFrozenSurfaceBuilder const&);
    OceanFrozenSurfaceBuilder(OceanFrozenSurfaceBuilder const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initBuilder(::LevelSeed64 levelSeed) /*override*/;

    virtual void initBiomeSurface(::SurfaceBuilderData& surfaceBuilderData) const /*override*/;

    virtual bool isBestBuilder(::SurfaceBuilderData const& surfaceBuilderData) const /*override*/;

    virtual void buildSurfaceAt(
        ::ISurfaceBuilder::GlobalParameters const&         globalParams,
        ::ISurfaceBuilder::SurfaceBuilderParameters const& surfaceBuilderParams,
        ::ISurfaceBuilder::PerColumnParameters const&      columnParams
    ) const /*override*/;

    virtual bool getUsesDepthValue() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OceanFrozenSurfaceBuilder();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initBuilder(::LevelSeed64 levelSeed);

    MCNAPI void $initBiomeSurface(::SurfaceBuilderData& surfaceBuilderData) const;

    MCNAPI bool $isBestBuilder(::SurfaceBuilderData const& surfaceBuilderData) const;

    MCNAPI void $buildSurfaceAt(
        ::ISurfaceBuilder::GlobalParameters const&         globalParams,
        ::ISurfaceBuilder::SurfaceBuilderParameters const& surfaceBuilderParams,
        ::ISurfaceBuilder::PerColumnParameters const&      columnParams
    ) const;

    MCNAPI bool $getUsesDepthValue() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace VanillaSurfaceBuilders
