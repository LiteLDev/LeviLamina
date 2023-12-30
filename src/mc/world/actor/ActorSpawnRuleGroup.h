#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorSpawnRuleBase.h"

class ActorSpawnRuleGroup : public ::ActorSpawnRuleBase {
public:
    std::unordered_map<std::string, int> mCategoryLookup; // this+0x48

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActorSpawnRuleGroup@@UEAA@XZ
    virtual ~ActorSpawnRuleGroup() = default;

    // vIndex: 1, symbol:
    // ?getRootKey@ActorSpawnRuleGroup@@MEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getRootKey();

    // vIndex: 2, symbol:
    // ?getFileType@ActorSpawnRuleGroup@@MEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getFileType();

    // vIndex: 3, symbol:
    // ?processPopulationControl@ActorSpawnRuleGroup@@MEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    virtual bool processPopulationControl(std::string const&, std::string const&);

    // vIndex: 4, symbol:
    // ?readResourceFiles@ActorSpawnRuleGroup@@MEAAXAEAVResourcePackManager@@AEBVMobSpawnRules@@AEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorSpawnRuleData@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorSpawnRuleData@@@std@@@2@@std@@@Z
    virtual void
    readResourceFiles(class ResourcePackManager&, class MobSpawnRules const&, std::unordered_map<std::string, struct ActorSpawnRuleData>&);

    // symbol: ??0ActorSpawnRuleGroup@@QEAA@AEAVResourcePackManager@@AEAVIWorldRegistriesProvider@@@Z
    MCAPI
    ActorSpawnRuleGroup(class ResourcePackManager& resourcePackManager, class IWorldRegistriesProvider& registries);

    // symbol: ?getActorSpawnPool@ActorSpawnRuleGroup@@QEBAHAEBUActorDefinitionIdentifier@@@Z
    MCAPI int getActorSpawnPool(struct ActorDefinitionIdentifier const& id) const;

    // symbol:
    // ?getDelayEnd@ActorSpawnRuleGroup@@QEBAHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI int getDelayEnd(std::string const& id) const;

    // symbol: ?offSetDelayByCurrentTick@ActorSpawnRuleGroup@@QEAAXAEBUTick@@@Z
    MCAPI void offSetDelayByCurrentTick(struct Tick const& currentTick);

    // symbol: ?resetDelayEnd@ActorSpawnRuleGroup@@QEAAXVMobSpawnRules@@_KAEAVRandom@@@Z
    MCAPI void resetDelayEnd(class MobSpawnRules spawnRules, uint64 age, class Random& random);

    // NOLINTEND
};
