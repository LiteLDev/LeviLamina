#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorSpawnRuleBase.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SpawnGroupRegistry : public ::ActorSpawnRuleBase {
public:
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
    // ?processPopulationControl@SpawnGroupRegistry@@MEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVValue@Json@@@Z
    virtual bool processPopulationControl(std::string const&, class Json::Value&);

    // vIndex: 4, symbol:
    // ?readResourceFiles@SpawnGroupRegistry@@MEAAXAEAVResourcePackManager@@AEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorSpawnRuleDefinition@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorSpawnRuleDefinition@@@std@@@2@@std@@@Z
    virtual void
    readResourceFiles(class ResourcePackManager&, std::unordered_map<std::string, struct ActorSpawnRuleDefinition>&);

    // symbol: ??0SpawnGroupRegistry@@QEAA@AEAVResourcePackManager@@@Z
    MCAPI explicit SpawnGroupRegistry(class ResourcePackManager&);

    // symbol:
    // ?getSpawnGroup@SpawnGroupRegistry@@QEBAPEBVSpawnGroupData@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class SpawnGroupData const* getSpawnGroup(std::string const&) const;

    // NOLINTEND
};
