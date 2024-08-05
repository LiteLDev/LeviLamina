#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorSpawnRuleBase.h"

class ActorSpawnRuleGroup : public ::ActorSpawnRuleBase {
public:
    // prevent constructor by default
    ActorSpawnRuleGroup& operator=(ActorSpawnRuleGroup const&);
    ActorSpawnRuleGroup(ActorSpawnRuleGroup const&);
    ActorSpawnRuleGroup();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorSpawnRuleGroup() = default;

    // vIndex: 1
    virtual std::string const& getRootKey();

    // vIndex: 2
    virtual std::string const& getFileType();

    // vIndex: 3
    virtual bool processPopulationControl(std::string const&, std::string const&);

    // vIndex: 4
    virtual void
    readResourceFiles(class ResourcePackManager&, class MobSpawnRules const&, std::unordered_map<std::string, struct ActorSpawnRuleData>&);

    MCAPI
    ActorSpawnRuleGroup(class ResourcePackManager& resourcePackManager, class IWorldRegistriesProvider& registries);

    MCAPI int getActorSpawnPool(struct ActorDefinitionIdentifier const& id) const;

    MCAPI int getDelayEnd(std::string const& id) const;

    MCAPI void offSetDelayByCurrentTick(struct Tick const& currentTick);

    MCAPI void resetDelayEnd(class MobSpawnRules spawnRules, uint64 age, class Random& random);

    // NOLINTEND
};
