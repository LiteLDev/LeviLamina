#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/glue/IBiomeComponentGlue.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
// clang-format on

struct CreatureSpawnProbabilityBiomeComponentGlue : public ::IBiomeComponentGlue {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool resolveAndValidate(::entt::meta_any const&, ::BiomeRegistry const&) /*override*/;

    virtual void applyToBiome(::Biome& biome, ::entt::meta_any const& component) const /*override*/;

    virtual ~CreatureSpawnProbabilityBiomeComponentGlue() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $resolveAndValidate(::entt::meta_any const&, ::BiomeRegistry const&);

    MCAPI void $applyToBiome(::Biome& biome, ::entt::meta_any const& component) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
