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
    // vIndex: 0, symbol: __gen_??1SpawnGroupRegistry@@UEAA@XZ
    virtual ~SpawnGroupRegistry() = default;

    // vIndex: 1, symbol:
    // ?getRootKey@SpawnGroupRegistry@@MEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getRootKey();

    // vIndex: 2, symbol:
    // ?getFileType@SpawnGroupRegistry@@MEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getFileType();

    // vIndex: 3, symbol:
    // ?processPopulationControl@SpawnGroupRegistry@@MEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    virtual bool processPopulationControl(std::string const&, std::string const&);

    // vIndex: 4, symbol:
    // ?readResourceFiles@SpawnGroupRegistry@@MEAAXAEAVResourcePackManager@@AEBVMobSpawnRules@@AEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorSpawnRuleData@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorSpawnRuleData@@@std@@@2@@std@@@Z
    virtual void
    readResourceFiles(class ResourcePackManager&, class MobSpawnRules const&, std::unordered_map<std::string, struct ActorSpawnRuleData>&);

    // symbol: ??0SpawnGroupRegistry@@QEAA@AEAVResourcePackManager@@@Z
    MCAPI explicit SpawnGroupRegistry(class ResourcePackManager& resourcePackManager);

    // symbol:
    // ?getSpawnGroup@SpawnGroupRegistry@@QEBAPEBVSpawnGroupData@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class SpawnGroupData const* getSpawnGroup(std::string const& identifier) const;

    // NOLINTEND
};
