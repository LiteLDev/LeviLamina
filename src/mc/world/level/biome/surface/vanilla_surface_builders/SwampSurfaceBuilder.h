#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

namespace VanillaSurfaceBuilders {

class SwampSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkbdc47e;
    ::ll::UntypedStorage<8, 8> mUnk197c24;
    // NOLINTEND

public:
    // prevent constructor by default
    SwampSurfaceBuilder& operator=(SwampSurfaceBuilder const&);
    SwampSurfaceBuilder(SwampSurfaceBuilder const&);
    SwampSurfaceBuilder();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initBuilder(uint levelSeed) /*override*/;

    virtual void initBiomeSurface(::Biome& biome) const /*override*/;

    virtual bool isBestBuilder(::Biome const& biome) const /*override*/;

    virtual void buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters) const /*override*/;

    virtual ~SwampSurfaceBuilder() /*override*/ = default;
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
