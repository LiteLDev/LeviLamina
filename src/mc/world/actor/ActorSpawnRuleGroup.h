#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorSpawnRuleBase.h"

class ActorSpawnRuleGroup : public ::ActorSpawnRuleBase {
public:
    std::unordered_map<std::string, int> mCategoryLookup; // this+0x48

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorSpawnRuleGroup() = default;

    // vIndex: 1
    virtual std::string const& getRootKey();

    // vIndex: 2
    virtual std::string const& getFileType();

    // vIndex: 3
    virtual bool processPopulationControl(std::string const& id, std::string const& populationControl);

    // vIndex: 4
    virtual void readResourceFiles(
        class ResourcePackManager&                                  resourcePackManager,
        class MobSpawnRules const&                                  baseSpawnRules,
        std::unordered_map<std::string, struct ActorSpawnRuleData>& dataMap
    );

    MCAPI
    ActorSpawnRuleGroup(class ResourcePackManager& resourcePackManager, class IWorldRegistriesProvider& registries);

    MCAPI int getActorSpawnPool(struct ActorDefinitionIdentifier const& id) const;

    MCAPI int getDelayEnd(std::string const& id) const;

    MCAPI void offSetDelayByCurrentTick(struct Tick const& currentTick);

    MCAPI void resetDelayEnd(class MobSpawnRules spawnRules, uint64 age, class Random& random);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class ResourcePackManager& resourcePackManager, class IWorldRegistriesProvider& registries);

    MCAPI std::string const& getFileType$();

    MCAPI std::string const& getRootKey$();

    MCAPI bool processPopulationControl$(std::string const& id, std::string const& populationControl);

    MCAPI void readResourceFiles$(
        class ResourcePackManager&                                  resourcePackManager,
        class MobSpawnRules const&                                  baseSpawnRules,
        std::unordered_map<std::string, struct ActorSpawnRuleData>& dataMap
    );

    // NOLINTEND
};
