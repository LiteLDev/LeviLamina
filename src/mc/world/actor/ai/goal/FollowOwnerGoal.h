#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class FollowOwnerGoal : public ::Goal {
public:
    // prevent constructor by default
    FollowOwnerGoal& operator=(FollowOwnerGoal const&) = delete;
    FollowOwnerGoal(FollowOwnerGoal const&)            = delete;
    FollowOwnerGoal()                                  = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@FollowOwnerGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@FollowOwnerGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@FollowOwnerGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@FollowOwnerGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@FollowOwnerGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@FollowOwnerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // vIndex: 9, symbol: ?onPlayerDimensionChanged@FollowOwnerGoal@@UEAAXPEAVPlayer@@V?$AutomaticID@VDimension@@H@@1@Z
    virtual void
    onPlayerDimensionChanged(class Player*, class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>);

    // symbol: ??0FollowOwnerGoal@@QEAA@AEAVMob@@MMM_N1M@Z
    MCAPI FollowOwnerGoal(class Mob&, float, float, float, bool, bool, float);

    // NOLINTEND
};
