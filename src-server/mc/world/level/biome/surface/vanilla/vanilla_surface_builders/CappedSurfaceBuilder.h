#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class Biome;
class Block;
class PerlinNoise;
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
        // vIndex: 0
        virtual ~MaterialHelper() = default;
    
        // vIndex: 1
        virtual bool isFoundationBlock(::Block const& block) const;
    
        // vIndex: 2
        virtual bool isWaterBlock(::Block const& block) const;
    
        // vIndex: 3
        virtual bool isLavaBlock(::Block const& block) const;
    
        // vIndex: 4
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
    ::ll::TypedStorage<4, 4, uint> mLevelSeed;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>> mBeachNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VanillaSurfaceBuilders::CappedSurfaceBuilder::MaterialHelper>> mMaterialHelper;
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
    virtual ~CappedSurfaceBuilder() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initBuilder(uint levelSeed);

    MCAPI void $initBiomeSurface(::Biome& biome) const;

    MCAPI bool $isBestBuilder(::Biome const& biome) const;

    MCAPI void $buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
