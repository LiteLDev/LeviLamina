#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/glue/IBiomeComponentGlue.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
namespace SharedTypes::v1_20_60 { struct IBiomeJsonComponent; }
// clang-format on

struct TheEndSurfaceBiomeComponentGlue : public ::IBiomeComponentGlue {
public:
    // prevent constructor by default
    TheEndSurfaceBiomeComponentGlue& operator=(TheEndSurfaceBiomeComponentGlue const&);
    TheEndSurfaceBiomeComponentGlue(TheEndSurfaceBiomeComponentGlue const&);
    TheEndSurfaceBiomeComponentGlue();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool
    resolveAndValidate(::SharedTypes::v1_20_60::IBiomeJsonComponent const&, ::BiomeRegistry const&) /*override*/;

    // vIndex: 2
    virtual void applyToBiome(::Biome& biome, ::SharedTypes::v1_20_60::IBiomeJsonComponent const&) const /*override*/;

    // vIndex: 0
    virtual ~TheEndSurfaceBiomeComponentGlue() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $resolveAndValidate(::SharedTypes::v1_20_60::IBiomeJsonComponent const&, ::BiomeRegistry const&);

    MCAPI void $applyToBiome(::Biome& biome, ::SharedTypes::v1_20_60::IBiomeJsonComponent const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
