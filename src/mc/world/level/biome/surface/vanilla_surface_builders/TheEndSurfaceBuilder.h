#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class SurfaceBuilderData;
// clang-format on

namespace VanillaSurfaceBuilders {

class TheEndSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initBuilder(uint) /*override*/;

    virtual void initBiomeSurface(::SurfaceBuilderData&) const /*override*/;

    virtual bool isBestBuilder(::SurfaceBuilderData const& surfaceBuilderData) const /*override*/;

    virtual void buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $initBuilder(uint);

    MCFOLD void $initBiomeSurface(::SurfaceBuilderData&) const;

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
