#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class FindMountGoal : public ::Goal {
public:
    // prevent constructor by default
    FindMountGoal& operator=(FindMountGoal const&);
    FindMountGoal(FindMountGoal const&);
    FindMountGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FindMountGoal@@UEAA@XZ
    virtual ~FindMountGoal() = default;

    // vIndex: 1, symbol: ?canUse@FindMountGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@FindMountGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@FindMountGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@FindMountGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@FindMountGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@FindMountGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0FindMountGoal@@QEAA@AEAVMob@@MH_N1MH@Z
    MCAPI FindMountGoal(
        class Mob& mob,
        float      dist,
        int        startDelay,
        bool       avoidWater,
        bool       targetNeeded,
        float      mountDistance,
        int        maxFailedAttempts
    );

    // symbol: ?isInMountRange@FindMountGoal@@QEAA_NXZ
    MCAPI bool isInMountRange();

    // NOLINTEND
};
