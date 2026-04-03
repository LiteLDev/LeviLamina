#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/glue/IBiomeComponentGlue.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
// clang-format on

struct BiomeTypeComponentGlue : public ::IBiomeComponentGlue {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool resolveAndValidate(::entt::meta_any const&, ::BiomeRegistry const&) /*override*/;

    virtual void applyToBiome(::Biome&, ::entt::meta_any const&) const /*override*/;

    virtual ~BiomeTypeComponentGlue() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
