#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class FollowMobGoal : public ::Goal {
public:
    // prevent constructor by default
    FollowMobGoal& operator=(FollowMobGoal const&);
    FollowMobGoal(FollowMobGoal const&);
    FollowMobGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FollowMobGoal@@UEAA@XZ
    virtual ~FollowMobGoal() = default;

    // vIndex: 1, symbol: ?canUse@FollowMobGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@FollowMobGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@FollowMobGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@FollowMobGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@FollowMobGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@FollowMobGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0FollowMobGoal@@QEAA@AEAVMob@@MMH@Z
    MCAPI FollowMobGoal(class Mob& mob, float speed, float stopDistance, int searchArea);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_setWantedMob@FollowMobGoal@@AEAA_NXZ
    MCAPI bool _setWantedMob();

    // NOLINTEND
};
