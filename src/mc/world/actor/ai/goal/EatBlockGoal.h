#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class EatBlockGoal : public ::Goal {
public:
    // prevent constructor by default
    EatBlockGoal& operator=(EatBlockGoal const&);
    EatBlockGoal(EatBlockGoal const&);
    EatBlockGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EatBlockGoal@@UEAA@XZ
    virtual ~EatBlockGoal() = default;

    // vIndex: 1, symbol: ?canUse@EatBlockGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@EatBlockGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@EatBlockGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@EatBlockGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@EatBlockGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@EatBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0EatBlockGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit EatBlockGoal(class Mob& mob);

    // symbol: ?getEatSuccessChance@EatBlockGoal@@QEBAMAEAVActor@@@Z
    MCAPI float getEatSuccessChance(class Actor& owner) const;

    // NOLINTEND
};
