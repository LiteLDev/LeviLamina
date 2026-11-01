#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"
#include "mc/world/level/block/BlockColor.h"

// auto generated forward declare list
// clang-format off
class LevelSeed64;
class MesaSurfaceBuilderNoises;
class SurfaceBuilderData;
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
};

} // namespace VanillaSurfaceBuilders
