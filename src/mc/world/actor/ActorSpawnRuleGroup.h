#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Experiments;
class IMinecraftEventing;
class IWorldRegistriesProvider;
class LinkedAssetValidator;
class MobSpawnRules;
class Random;
class ResourcePackManager;
struct ActorDefinitionIdentifier;
namespace br::spawn { class SpawnPlacements; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ActorSpawnRuleGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>> mCategoryLookup;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>> mSpawnDelayStartMap;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                     mEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorSpawnRuleGroup& operator=(ActorSpawnRuleGroup const&);
    ActorSpawnRuleGroup(ActorSpawnRuleGroup const&);
    ActorSpawnRuleGroup();

public:
    // virtual functions
    // NOLINTBEGIN
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
        ::LinkedAssetValidator&        linkedAssetValidator,
        ::Experiments const&           experiments,
        ::IMinecraftEventing&          eventing
    );

    MCAPI int getActorSpawnPool(::ActorDefinitionIdentifier const& id) const;

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
        ::LinkedAssetValidator&        linkedAssetValidator,
        ::Experiments const&           experiments,
        ::IMinecraftEventing&          eventing
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
