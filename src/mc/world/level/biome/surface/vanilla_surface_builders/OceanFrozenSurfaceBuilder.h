#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class Block;
class FrozenOceanBuilderNoises;
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
    virtual void initBuilder(uint levelSeed) /*override*/;

    virtual void initBiomeSurface(::SurfaceBuilderData& surfaceBuilderData) const /*override*/;

    virtual bool isBestBuilder(::SurfaceBuilderData const& surfaceBuilderData) const /*override*/;

    virtual void buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OceanFrozenSurfaceBuilder();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initBuilder(uint levelSeed);

    MCFOLD void $initBiomeSurface(::SurfaceBuilderData& surfaceBuilderData) const;

    MCAPI bool $isBestBuilder(::SurfaceBuilderData const& surfaceBuilderData) const;

    MCAPI void $buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace VanillaSurfaceBuilders
