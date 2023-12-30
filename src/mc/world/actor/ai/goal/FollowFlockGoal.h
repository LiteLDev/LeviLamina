#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class FollowFlockGoal : public ::Goal {
public:
    // prevent constructor by default
    FollowFlockGoal& operator=(FollowFlockGoal const&);
    FollowFlockGoal(FollowFlockGoal const&);
    FollowFlockGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FollowFlockGoal@@UEAA@XZ
    virtual ~FollowFlockGoal() = default;

    // vIndex: 1, symbol: ?canUse@FollowFlockGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@FollowFlockGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 3, symbol: ?canBeInterrupted@FollowFlockGoal@@UEAA_NXZ
    virtual bool canBeInterrupted();

    // vIndex: 4, symbol: ?start@FollowFlockGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@FollowFlockGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@FollowFlockGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@FollowFlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0FollowFlockGoal@@QEAA@AEAVMob@@M@Z
    MCAPI FollowFlockGoal(class Mob& mob, float speed);

    // NOLINTEND
};
