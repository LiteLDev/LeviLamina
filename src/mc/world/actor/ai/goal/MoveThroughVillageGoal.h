#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class MoveThroughVillageGoal : public ::Goal {
public:
    // prevent constructor by default
    MoveThroughVillageGoal& operator=(MoveThroughVillageGoal const&);
    MoveThroughVillageGoal(MoveThroughVillageGoal const&);
    MoveThroughVillageGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MoveThroughVillageGoal@@UEAA@XZ
    virtual ~MoveThroughVillageGoal() = default;

    // vIndex: 1, symbol: ?canUse@MoveThroughVillageGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@MoveThroughVillageGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@MoveThroughVillageGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@MoveThroughVillageGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@MoveThroughVillageGoal@@EEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0MoveThroughVillageGoal@@QEAA@AEAVMob@@M_N@Z
    MCAPI MoveThroughVillageGoal(class Mob& mob, float speedModifier, bool onlyAtNight);

    // NOLINTEND
};
