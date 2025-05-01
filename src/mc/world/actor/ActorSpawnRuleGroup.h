#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Experiments;
class IWorldRegistriesProvider;
class MobSpawnRules;
class Random;
class ResourcePackManager;
namespace br::spawn { class SpawnPlacements; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ActorSpawnRuleGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>> mCategoryLookup;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>> mSpawnDelayStartMap;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorSpawnRuleGroup() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorSpawnRuleGroup(
        ::ResourcePackManager&         resourcePackManager,
        ::IWorldRegistriesProvider&    registries,
        ::br::spawn::SpawnPlacements&  spawnPlacements,
        ::cereal::ReflectionCtx const& ctx,
        ::Experiments const&           experiments
    );

    MCNAPI void resetDelayEnd(::MobSpawnRules spawnRules, uint64 age, ::Random& random);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ResourcePackManager&         resourcePackManager,
        ::IWorldRegistriesProvider&    registries,
        ::br::spawn::SpawnPlacements&  spawnPlacements,
        ::cereal::ReflectionCtx const& ctx,
        ::Experiments const&           experiments
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
