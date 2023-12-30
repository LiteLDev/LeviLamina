#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RandomSitGoal : public ::Goal {
public:
    // prevent constructor by default
    RandomSitGoal& operator=(RandomSitGoal const&);
    RandomSitGoal(RandomSitGoal const&);
    RandomSitGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RandomSitGoal@@UEAA@XZ
    virtual ~RandomSitGoal() = default;

    // vIndex: 1, symbol: ?canUse@RandomSitGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@RandomSitGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@RandomSitGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@RandomSitGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@RandomSitGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0RandomSitGoal@@QEAA@AEAVMob@@MMMM@Z
    MCAPI RandomSitGoal(class Mob& mob, float startChance, float stopChance, float cooldown, float minTime);

    // NOLINTEND
};
