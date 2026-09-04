#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"
#include "mc/world/level/block/BlockColor.h"
#include "mc/world/level/levelgen/synth/MesaSurfaceBuilderNoises.h"

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

    virtual void buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initBuilder(::LevelSeed64 levelSeed);

    MCFOLD void $initBiomeSurface(::SurfaceBuilderData& surfaceBuilderData) const;

    MCFOLD bool $isBestBuilder(::SurfaceBuilderData const& surfaceBuilderData) const;

    MCAPI void $buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters) const;


    // NOLINTEND
};

} // namespace VanillaSurfaceBuilders
