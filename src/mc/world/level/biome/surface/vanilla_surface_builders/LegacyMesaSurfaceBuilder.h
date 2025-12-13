#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class Biome;
class Random;
// clang-format on

namespace VanillaSurfaceBuilders {

class LegacyMesaSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 64> mUnk25f178;
    ::ll::UntypedStorage<8, 8>  mUnk80f733;
    ::ll::UntypedStorage<8, 8>  mUnkc93024;
    ::ll::UntypedStorage<8, 8>  mUnk71c973;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyMesaSurfaceBuilder& operator=(LegacyMesaSurfaceBuilder const&);
    LegacyMesaSurfaceBuilder(LegacyMesaSurfaceBuilder const&);
    LegacyMesaSurfaceBuilder();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initBuilder(uint levelSeed) /*override*/;

    virtual void initBiomeSurface(::Biome& biome) const /*override*/;

    virtual bool isBestBuilder(::Biome const& biome) const /*override*/;

    virtual void buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters) const /*override*/;

    virtual ~LegacyMesaSurfaceBuilder() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void generateBands(::Random& random);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
