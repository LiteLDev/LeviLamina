#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RiverFollowingGoal : public ::Goal {
public:
    // prevent constructor by default
    RiverFollowingGoal& operator=(RiverFollowingGoal const&);
    RiverFollowingGoal(RiverFollowingGoal const&);
    RiverFollowingGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RiverFollowingGoal@@UEAA@XZ
    virtual ~RiverFollowingGoal() = default;

    // vIndex: 1, symbol: ?canUse@RiverFollowingGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@RiverFollowingGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@RiverFollowingGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@RiverFollowingGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@RiverFollowingGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@RiverFollowingGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0RiverFollowingGoal@@QEAA@AEAVMob@@MM@Z
    MCAPI RiverFollowingGoal(class Mob& mob, float lookAhead, float speed);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?determineSteerDirection@RiverFollowingGoal@@IEAAXXZ
    MCAPI void determineSteerDirection();

    // NOLINTEND
};
