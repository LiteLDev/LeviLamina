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

struct BiomeTypeComponentGlue : public ::IBiomeComponentGlue {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool
    resolveAndValidate(::SharedTypes::v1_20_60::IBiomeJsonComponent const&, ::BiomeRegistry const&) /*override*/;

    virtual void applyToBiome(::Biome&, ::SharedTypes::v1_20_60::IBiomeJsonComponent const&) const /*override*/;

    virtual ~BiomeTypeComponentGlue() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
