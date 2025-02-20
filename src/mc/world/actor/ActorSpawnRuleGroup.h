#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Experiments;
class IWorldRegistriesProvider;
class MobSpawnRules;
class MobSpawnerData;
class Random;
class ResourcePackManager;
namespace br::spawn { class SpawnPlacements; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ActorSpawnRuleGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>>                                 mCategoryLookup;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::shared_ptr<::MobSpawnerData>>> mSpawnData;
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
    MCAPI ActorSpawnRuleGroup(
        ::ResourcePackManager&         resourcePackManager,
        ::IWorldRegistriesProvider&    registries,
        ::br::spawn::SpawnPlacements&  spawnPlacements,
        ::cereal::ReflectionCtx const& ctx,
        ::Experiments const&           experiments
    );

    MCAPI void resetDelayEnd(::MobSpawnRules spawnRules, uint64 age, ::Random& random);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
