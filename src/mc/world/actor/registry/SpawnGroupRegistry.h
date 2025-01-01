#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BiomeFilterGroup;
class MobSpawnRules;
class ResourcePackManager;
class SemVersion;
class SpawnGroupData;
struct ActorSpawnRuleData;
// clang-format on

class SpawnGroupRegistry {
public:
    // SpawnGroupRegistry inner types define
    using SpawnGroupRegistryMap = ::std::vector<::std::unique_ptr<::SpawnGroupData>>;

    using SpawnGroupLookupMap = ::std::unordered_map<::std::string, ::SpawnGroupData*>;

    using SpawnRulesHandler =
        ::std::function<void(::std::string const&, int, ::BiomeFilterGroup&, ::MobSpawnRules&, ::SemVersion const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::SpawnGroupData>>>     mSpawnGroupRegistry;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::SpawnGroupData*>> mSpawnGroupLookupMap;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SpawnGroupRegistry() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SpawnGroupRegistry(::ResourcePackManager& resourcePackManager);

    MCAPI void _addSpawnRules(::std::string const& identifier, ::MobSpawnRules& spawnRules);

    MCAPI void _getResources(
        ::ResourcePackManager& resourcePackManager,
        ::std::function<void(::std::string const&, int, ::BiomeFilterGroup&, ::MobSpawnRules&, ::SemVersion const&)>
            callback
    );

    MCAPI bool _readJson(::std::string&& data, ::std::unordered_map<::std::string, ::ActorSpawnRuleData>& dataMap);

    MCAPI ::SpawnGroupData const* getSpawnGroup(::std::string const& identifier) const;

    MCAPI void readResourceFiles(
        ::ResourcePackManager&                                     resourcePackManager,
        ::std::unordered_map<::std::string, ::ActorSpawnRuleData>& dataMap
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ResourcePackManager& resourcePackManager);
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
