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
    // ?processPopulationControl@ActorSpawnRuleGroup@@MEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVValue@Json@@@Z
    virtual bool processPopulationControl(std::string const&, class Json::Value&) = 0;

    // vIndex: 4, symbol:
    // ?readResourceFiles@ActorSpawnRuleGroup@@MEAAXAEAVResourcePackManager@@AEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorSpawnRuleDefinition@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorSpawnRuleDefinition@@@std@@@2@@std@@@Z
    virtual void
    readResourceFiles(class ResourcePackManager&, std::unordered_map<std::string, struct ActorSpawnRuleDefinition>&) = 0;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_applySpawnCondition@ActorSpawnRuleBase@@IEAAXV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEAVBiomeFilterGroup@@AEAVMobSpawnRules@@AEBVSemVersion@@@Z@std@@AEAVValue@Json@@AEBVMobSpawnRules@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVSemVersion@@@Z
    MCAPI void
    _applySpawnCondition(std::function<void(std::string const&, int, class BiomeFilterGroup&, class MobSpawnRules&, class SemVersion const&)>, class Json::Value&, class MobSpawnRules const&, std::string const&, class SemVersion const&);

    // symbol:
    // ?_getResources@ActorSpawnRuleBase@@IEAAXAEAVResourcePackManager@@AEBVMobSpawnRules@@V?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEAVBiomeFilterGroup@@AEAVMobSpawnRules@@AEBVSemVersion@@@Z@std@@@Z
    MCAPI void
    _getResources(class ResourcePackManager&, class MobSpawnRules const&, std::function<void(std::string const&, int, class BiomeFilterGroup&, class MobSpawnRules&, class SemVersion const&)>);

    // symbol:
    // ?_readJsonHeader@ActorSpawnRuleBase@@IEAA_N$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorSpawnRuleDefinition@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorSpawnRuleDefinition@@@std@@@2@@3@@Z
    MCAPI bool _readJsonHeader(std::string&&, std::unordered_map<std::string, struct ActorSpawnRuleDefinition>&);

    // symbol:
    // ?_registerSpawnRules@ActorSpawnRuleBase@@IEAAXV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEAVBiomeFilterGroup@@AEAVMobSpawnRules@@AEBVSemVersion@@@Z@std@@AEBVMobSpawnRules@@AEAVValue@Json@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVSemVersion@@@Z
    MCAPI void
    _registerSpawnRules(std::function<void(std::string const&, int, class BiomeFilterGroup&, class MobSpawnRules&, class SemVersion const&)>, class MobSpawnRules const&, class Json::Value&, std::string const&, class SemVersion const&);

    // NOLINTEND
};
