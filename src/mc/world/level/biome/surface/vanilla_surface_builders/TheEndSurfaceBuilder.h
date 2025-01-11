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
    // vIndex: 1
    virtual void init(::Biome&, uint) /*override*/;

    // vIndex: 2
    virtual void buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters) const /*override*/;

    // vIndex: 0
    virtual ~TheEndSurfaceBuilder() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $init(::Biome&, uint);

    MCAPI void $buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace VanillaSurfaceBuilders
