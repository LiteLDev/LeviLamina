#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorSpawnRuleBase.h"

class SpawnGroupRegistry : public ::ActorSpawnRuleBase {
public:
    std::vector<std::unique_ptr<class SpawnGroupData>>     mSpawnGroupRegistry;  // this+0x48
    std::unordered_map<std::string, class SpawnGroupData*> mSpawnGroupLookupMap; // this+0x60

    // prevent constructor by default
    SpawnGroupRegistry& operator=(SpawnGroupRegistry const&);
    SpawnGroupRegistry(SpawnGroupRegistry const&);
    SpawnGroupRegistry();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SpawnGroupRegistry() = default;

    // vIndex: 1
    virtual std::string const& getRootKey();

    // vIndex: 2
    virtual std::string const& getFileType();

    // vIndex: 3
    virtual bool processPopulationControl(std::string const&, std::string const&);

    // vIndex: 4
    virtual void
    readResourceFiles(class ResourcePackManager&, class MobSpawnRules const&, std::unordered_map<std::string, struct ActorSpawnRuleData>&);

    MCAPI explicit SpawnGroupRegistry(class ResourcePackManager& resourcePackManager);

    MCAPI class SpawnGroupData const* getSpawnGroup(std::string const& identifier) const;

    // NOLINTEND
};
