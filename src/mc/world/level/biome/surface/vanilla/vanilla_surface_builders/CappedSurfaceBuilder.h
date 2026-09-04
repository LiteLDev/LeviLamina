#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class Block;
class LevelSeed64;
class PerlinNoise;
class SurfaceBuilderData;
// clang-format on

namespace VanillaSurfaceBuilders {

class CappedSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // CappedSurfaceBuilder inner types declare
    // clang-format off
    class MaterialHelper;
    // clang-format on

    // CappedSurfaceBuilder inner types define
    class MaterialHelper {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~MaterialHelper() = default;

        virtual bool isFoundationBlock(::Block const& block) const;

        virtual bool isWaterBlock(::Block const& block) const;

        virtual bool isLavaBlock(::Block const& block) const;

        virtual bool isSolidBlock(::Block const& block) const;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI bool $isFoundationBlock(::Block const& block) const;

        MCAPI bool $isWaterBlock(::Block const& block) const;

        MCAPI bool $isLavaBlock(::Block const& block) const;

        MCAPI bool $isSolidBlock(::Block const& block) const;


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                             mLevelSeed;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>> mBeachNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VanillaSurfaceBuilders::CappedSurfaceBuilder::MaterialHelper>>
        mMaterialHelper;
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

    MCAPI void $initBiomeSurface(::SurfaceBuilderData& surfaceBuilderData) const;

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
