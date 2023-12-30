#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class FindUnderwaterTreasureGoal : public ::Goal {
public:
    // prevent constructor by default
    FindUnderwaterTreasureGoal& operator=(FindUnderwaterTreasureGoal const&);
    FindUnderwaterTreasureGoal(FindUnderwaterTreasureGoal const&);
    FindUnderwaterTreasureGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FindUnderwaterTreasureGoal@@UEAA@XZ
    virtual ~FindUnderwaterTreasureGoal() = default;

    // vIndex: 1, symbol: ?canUse@FindUnderwaterTreasureGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@FindUnderwaterTreasureGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 3, symbol: ?canBeInterrupted@FindUnderwaterTreasureGoal@@UEAA_NXZ
    virtual bool canBeInterrupted();

    // vIndex: 4, symbol: ?start@FindUnderwaterTreasureGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@FindUnderwaterTreasureGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@FindUnderwaterTreasureGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@FindUnderwaterTreasureGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0FindUnderwaterTreasureGoal@@QEAA@AEAVMob@@MHH@Z
    MCAPI FindUnderwaterTreasureGoal(class Mob& mob, float speed, int searchArea, int distanceToTravel);

    // NOLINTEND
};
