#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class FollowOwnerGoal : public ::Goal {
public:
    // prevent constructor by default
    FollowOwnerGoal& operator=(FollowOwnerGoal const&);
    FollowOwnerGoal(FollowOwnerGoal const&);
    FollowOwnerGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FollowOwnerGoal@@UEAA@XZ
    virtual ~FollowOwnerGoal() = default;

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
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 9, symbol: ?onPlayerDimensionChanged@FollowOwnerGoal@@UEAAXPEAVPlayer@@V?$AutomaticID@VDimension@@H@@1@Z
    virtual void onPlayerDimensionChanged(class Player* player, DimensionType fromDimension, DimensionType toDimension);

    // symbol: ??0FollowOwnerGoal@@QEAA@AEAVMob@@MMM_N1M@Z
    MCAPI FollowOwnerGoal(
        class Mob& mob,
        float      speed,
        float      startDistance,
        float      stopDistance,
        bool,
        bool,
        float maxDistance
    );

    // NOLINTEND
};
