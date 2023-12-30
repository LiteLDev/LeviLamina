#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class FollowParentGoal : public ::Goal {
public:
    // prevent constructor by default
    FollowParentGoal& operator=(FollowParentGoal const&);
    FollowParentGoal(FollowParentGoal const&);
    FollowParentGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FollowParentGoal@@UEAA@XZ
    virtual ~FollowParentGoal() = default;

    // vIndex: 1, symbol: ?canUse@FollowParentGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@FollowParentGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@FollowParentGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@FollowParentGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@FollowParentGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@FollowParentGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0FollowParentGoal@@QEAA@AEAVMob@@M@Z
    MCAPI FollowParentGoal(class Mob& mob, float speed);

    // NOLINTEND
};
