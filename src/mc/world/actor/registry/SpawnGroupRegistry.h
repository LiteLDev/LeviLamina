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
    MCNAPI void _addSpawnRules(::std::string const& identifier, ::MobSpawnRules& spawnRules);

    MCNAPI void _getResources(
        ::ResourcePackManager& callback,
        ::std::function<void(::std::string const&, int, ::BiomeFilterGroup&, ::MobSpawnRules&, ::SemVersion const&)>
            resourcePackManager
    );

    MCNAPI bool _readJson(::std::string&& data, ::std::unordered_map<::std::string, ::ActorSpawnRuleData>& dataMap);

    MCNAPI void readResourceFiles(
        ::ResourcePackManager&                                     dataMap,
        ::std::unordered_map<::std::string, ::ActorSpawnRuleData>& resourcePackManager
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
