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
    // vIndex: 1
    virtual void init(::Biome& biome, uint levelSeed) /*override*/;

    // vIndex: 2
    virtual void buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters) const /*override*/;

    // vIndex: 0
    virtual ~LegacyMesaSurfaceBuilder() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void generateBands(::Random& random);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $init(::Biome& biome, uint levelSeed);

    MCAPI void $buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace VanillaSurfaceBuilders
