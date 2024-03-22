#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorSpawnRuleBase {
public:
    std::unordered_map<std::string, int> mSpawnDelayStartMap; // this+0x8

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorSpawnRuleBase@@UEAA@XZ
    virtual ~ActorSpawnRuleBase();

    // vIndex: 1, symbol:
    // ?getRootKey@ActorSpawnRuleGroup@@MEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getRootKey() = 0;

    // vIndex: 2, symbol:
    // ?getFileType@ActorSpawnRuleGroup@@MEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getFileType() = 0;

    // vIndex: 3, symbol:
    // ?processPopulationControl@ActorSpawnRuleGroup@@MEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    virtual bool processPopulationControl(std::string const&, std::string const&) = 0;

    // vIndex: 4, symbol:
    // ?readResourceFiles@ActorSpawnRuleGroup@@MEAAXAEAVResourcePackManager@@AEBVMobSpawnRules@@AEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorSpawnRuleData@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorSpawnRuleData@@@std@@@2@@std@@@Z
    virtual void
    readResourceFiles(class ResourcePackManager&, class MobSpawnRules const&, std::unordered_map<std::string, struct ActorSpawnRuleData>&) = 0;

    // symbol:
    // ?loadSpawnCondition@ActorSpawnRuleBase@@SA?AUActorSpawnConditionData@@AEBVSemVersion@@AEBVValue@Json@@AEBVMobSpawnRules@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static struct ActorSpawnConditionData
    loadSpawnCondition(class SemVersion const&, class Json::Value const&, class MobSpawnRules const&, std::string const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_getResources@ActorSpawnRuleBase@@IEAAXAEAVResourcePackManager@@AEBVMobSpawnRules@@V?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEAVBiomeFilterGroup@@AEAVMobSpawnRules@@AEBVSemVersion@@@Z@std@@@Z
    MCAPI void _getResources(
        class ResourcePackManager& resourcePackManager,
        class MobSpawnRules const& baseSpawnRules,
        std::function<
            void(std::string const&, int, class BiomeFilterGroup&, class MobSpawnRules&, class SemVersion const&)>
            rulesHandler
    );

    // symbol:
    // ?_readJson@ActorSpawnRuleBase@@IEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVMobSpawnRules@@AEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorSpawnRuleData@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorSpawnRuleData@@@std@@@2@@3@@Z
    MCAPI bool
    _readJson(std::string const&, class MobSpawnRules const&, std::unordered_map<std::string, struct ActorSpawnRuleData>&);

    // symbol:
    // ?_registerSpawnRules@ActorSpawnRuleBase@@IEAAXV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEAVBiomeFilterGroup@@AEAVMobSpawnRules@@AEBVSemVersion@@@Z@std@@AEAUActorSpawnRuleData@@@Z
    MCAPI void
    _registerSpawnRules(std::function<void(std::string const&, int, class BiomeFilterGroup&, class MobSpawnRules&, class SemVersion const&)>, struct ActorSpawnRuleData&);

    // NOLINTEND
};
