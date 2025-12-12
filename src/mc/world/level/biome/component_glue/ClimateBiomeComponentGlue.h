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

struct ClimateBiomeComponentGlue : public ::IBiomeComponentGlue {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool resolveAndValidate(
        ::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent,
        ::BiomeRegistry const&
    ) /*override*/;

    virtual void
    applyToBiome(::Biome& biome, ::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent) const
        /*override*/;

    virtual ~ClimateBiomeComponentGlue() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool
    $resolveAndValidate(::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent, ::BiomeRegistry const&);

    MCNAPI void
    $applyToBiome(::Biome& biome, ::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
