#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorInfoRegistry {
public:
    // prevent constructor by default
    ActorInfoRegistry& operator=(ActorInfoRegistry const&);
    ActorInfoRegistry(ActorInfoRegistry const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ActorInfoRegistry@@QEAA@XZ
    MCAPI ActorInfoRegistry();

    // symbol: ?getActorInfo@ActorInfoRegistry@@QEBAAEBUActorInfo@@I@Z
    MCAPI struct ActorInfo const& getActorInfo(uint) const;

    // symbol:
    // ?getActorInfoId@ActorInfoRegistry@@QEBAIAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI uint getActorInfoId(std::string const&) const;

    // symbol: ?getActorInfoId@ActorInfoRegistry@@QEBAIAEB_K@Z
    MCAPI uint getActorInfoId(uint64 const&) const;

    // symbol: ?getActorInfoList@ActorInfoRegistry@@QEBA?AV?$vector@UActorInfo@@V?$allocator@UActorInfo@@@std@@@std@@XZ
    MCAPI std::vector<struct ActorInfo> getActorInfoList() const;

    // symbol:
    // ?isSpawnEggAvailable@ActorInfoRegistry@@QEAA_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool isSpawnEggAvailable(std::string);

    // symbol: ?registerActorInfo@ActorInfoRegistry@@QEAAXAEBUActorInfo@@@Z
    MCAPI void registerActorInfo(struct ActorInfo const&);

    // symbol:
    // ?setSpawnEggAvailable@ActorInfoRegistry@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI void setSpawnEggAvailable(std::string, bool);

    // NOLINTEND
};
