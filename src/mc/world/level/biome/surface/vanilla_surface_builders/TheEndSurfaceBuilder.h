#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

namespace VanillaSurfaceBuilders {

class TheEndSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initBuilder(uint) /*override*/;

    virtual void initBiomeSurface(::Biome&) const /*override*/;

    virtual bool isBestBuilder(::Biome const& biome) const /*override*/;

    virtual void buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters) const /*override*/;

    virtual ~TheEndSurfaceBuilder() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initBuilder(uint);

    MCNAPI void $initBiomeSurface(::Biome&) const;

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
