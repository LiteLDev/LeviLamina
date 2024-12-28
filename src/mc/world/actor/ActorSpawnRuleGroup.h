#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BiomeFilterGroup;
class IWorldRegistriesProvider;
class MobSpawnRules;
class MobSpawnerData;
class Random;
class ResourcePackManager;
class SemVersion;
struct ActorDefinitionIdentifier;
struct ActorSpawnRuleData;
struct Tick;
// clang-format on

class ActorSpawnRuleGroup {
public:
    // ActorSpawnRuleGroup inner types define
    using SpawnRulesHandler =
        ::std::function<void(::std::string const&, int, ::BiomeFilterGroup&, ::MobSpawnRules&, ::SemVersion const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>>                                 mCategoryLookup;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::shared_ptr<::MobSpawnerData>>> mSpawnData;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>> mSpawnDelayStartMap;
    // NOLINTEND

public:
    std::unordered_map<std::string, int> mCategoryLookup; // this+0x48

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorSpawnRuleGroup();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorSpawnRuleGroup(::ResourcePackManager& resourcePackManager, ::IWorldRegistriesProvider& registries);

    MCAPI void _getResources(
        ::ResourcePackManager& resourcePackManager,
        ::std::function<void(::std::string const&, int, ::BiomeFilterGroup&, ::MobSpawnRules&, ::SemVersion const&)>
            callback
    );

    MCAPI bool _readJson(::std::string data, ::std::unordered_map<::std::string, ::ActorSpawnRuleData>& dataMap);

    MCAPI void _registerSpawnRules(
        ::std::function<void(::std::string const&, int, ::BiomeFilterGroup&, ::MobSpawnRules&, ::SemVersion const&)>
                              callback,
        ::ActorSpawnRuleData& spawnRuleData
    );

    MCAPI int getActorSpawnPool(::ActorDefinitionIdentifier const& id) const;

    MCAPI int getDelayEnd(::std::string const& id) const;

    MCAPI void offSetDelayByCurrentTick(::Tick const& currentTick);

    MCAPI void readResourceFiles(
        ::ResourcePackManager&                                     resourcePackManager,
        ::std::unordered_map<::std::string, ::ActorSpawnRuleData>& dataMap
    );

    MCAPI void resetDelayEnd(::MobSpawnRules spawnRules, uint64 age, ::Random& random);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ResourcePackManager& resourcePackManager, ::IWorldRegistriesProvider& registries);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
