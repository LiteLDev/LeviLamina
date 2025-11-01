#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class Biome;
class Block;
class PerlinSimplexNoise;
// clang-format on

namespace VanillaSurfaceBuilders {

class SwampSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&> mWaterBlock;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinSimplexNoise>> mPuddleNoise;
    // NOLINTEND

public:
    // prevent constructor by default
    SwampSurfaceBuilder& operator=(SwampSurfaceBuilder const&);
    SwampSurfaceBuilder(SwampSurfaceBuilder const&);
    SwampSurfaceBuilder();

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
    virtual ~SwampSurfaceBuilder() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initBuilder(uint levelSeed);

    MCFOLD void $initBiomeSurface(::Biome& biome) const;

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
