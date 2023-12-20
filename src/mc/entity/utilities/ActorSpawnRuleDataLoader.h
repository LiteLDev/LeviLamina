#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"

class ActorSpawnRuleDataLoader {
public:
    // prevent constructor by default
    ActorSpawnRuleDataLoader& operator=(ActorSpawnRuleDataLoader const&);
    ActorSpawnRuleDataLoader(ActorSpawnRuleDataLoader const&);
    ActorSpawnRuleDataLoader();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ActorSpawnRuleDataLoader@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVMobSpawnRules@@@Z
    MCAPI ActorSpawnRuleDataLoader(std::string, class MobSpawnRules const*);

    // symbol:
    // ?load@ActorSpawnRuleDataLoader@@QEBA?AV?$LoadResult@UActorSpawnRuleData@@@Puv@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Puv::LoadResult<struct ActorSpawnRuleData> load(std::string const&) const;

    // symbol: ??1ActorSpawnRuleDataLoader@@QEAA@XZ
    MCAPI ~ActorSpawnRuleDataLoader();

    // NOLINTEND
};
