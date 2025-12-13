#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"

// auto generated forward declare list
// clang-format off
class BiomeFilterGroup;
class IMinecraftEventing;
class MobSpawnRules;
class ResourcePackManager;
class SemVersion;
class SpawnGroupData;
struct ActorSpawnRuleData;
// clang-format on

class SpawnGroupRegistry {
public:
    // SpawnGroupRegistry inner types define
    using SpawnGroupLookupMap = ::std::unordered_map<::std::string, ::SpawnGroupData*>;

    using SpawnGroupRegistryMap = ::std::vector<::std::unique_ptr<::SpawnGroupData>>;

    using SpawnRulesHandler =
        ::std::function<void(::std::string const&, int, ::BiomeFilterGroup&, ::MobSpawnRules&, ::SemVersion const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::SpawnGroupData>>>     mSpawnGroupRegistry;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::SpawnGroupData*>> mSpawnGroupLookupMap;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                                   mEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnGroupRegistry& operator=(SpawnGroupRegistry const&);
    SpawnGroupRegistry(SpawnGroupRegistry const&);
    SpawnGroupRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SpawnGroupRegistry() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _addSpawnRules(::std::string const& identifier, ::MobSpawnRules& spawnRules);

    MCAPI void _getResources(
        ::ResourcePackManager& resourcePackManager,
        ::std::function<void(::std::string const&, int, ::BiomeFilterGroup&, ::MobSpawnRules&, ::SemVersion const&)>
            callback
    );

    MCAPI ::Puv::LoadResult<::ActorSpawnRuleData>
    _readJson(::std::string&& data, ::std::unordered_map<::std::string, ::ActorSpawnRuleData>& dataMap);

    MCAPI void readResourceFiles(
        ::ResourcePackManager&                                     resourcePackManager,
        ::std::unordered_map<::std::string, ::ActorSpawnRuleData>& dataMap
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
