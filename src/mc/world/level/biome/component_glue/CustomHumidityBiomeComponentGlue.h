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

struct CustomHumidityBiomeComponentGlue : public ::IBiomeComponentGlue {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool
    resolveAndValidate(::SharedTypes::v1_20_60::IBiomeJsonComponent const&, ::BiomeRegistry const&) /*override*/;

    virtual void
    applyToBiome(::Biome& biome, ::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent) const
        /*override*/;

    virtual ~CustomHumidityBiomeComponentGlue() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $resolveAndValidate(::SharedTypes::v1_20_60::IBiomeJsonComponent const&, ::BiomeRegistry const&);

    MCAPI void
    $applyToBiome(::Biome& biome, ::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
