#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class LevelSeed64;
class SurfaceBuilderData;
// clang-format on

namespace VanillaSurfaceBuilders {

class TheEndSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initBuilder(::LevelSeed64) /*override*/;

    virtual void initBiomeSurface(::SurfaceBuilderData&) const /*override*/;

    virtual bool isBestBuilder(::SurfaceBuilderData const& surfaceBuilderData) const /*override*/;

    virtual void buildSurfaceAt(
        ::ISurfaceBuilder::GlobalParameters const&,
        ::ISurfaceBuilder::SurfaceBuilderParameters const&,
        ::ISurfaceBuilder::PerColumnParameters const& columnParams
    ) const /*override*/;

    virtual bool getUsesDepthValue() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $initBuilder(::LevelSeed64);

    MCFOLD void $initBiomeSurface(::SurfaceBuilderData&) const;

    MCAPI bool $isBestBuilder(::SurfaceBuilderData const& surfaceBuilderData) const;

    MCAPI void $buildSurfaceAt(
        ::ISurfaceBuilder::GlobalParameters const&,
        ::ISurfaceBuilder::SurfaceBuilderParameters const&,
        ::ISurfaceBuilder::PerColumnParameters const& columnParams
    ) const;

    MCFOLD bool $getUsesDepthValue() const;


    // NOLINTEND
};

} // namespace VanillaSurfaceBuilders
