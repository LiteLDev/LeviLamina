#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/MoveTowardsTargetGoal.h"

class FollowTargetCaptainGoal : public ::MoveTowardsTargetGoal {
public:
    // prevent constructor by default
    FollowTargetCaptainGoal& operator=(FollowTargetCaptainGoal const&);
    FollowTargetCaptainGoal(FollowTargetCaptainGoal const&);
    FollowTargetCaptainGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~FollowTargetCaptainGoal();

    // vIndex: 1, symbol: ?canUse@FollowTargetCaptainGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@FollowTargetCaptainGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@FollowTargetCaptainGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@FollowTargetCaptainGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@FollowTargetCaptainGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@FollowTargetCaptainGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0FollowTargetCaptainGoal@@QEAA@AEAVMob@@MMM@Z
    MCAPI FollowTargetCaptainGoal(class Mob&, float, float, float);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_determineMovePos@FollowTargetCaptainGoal@@AEAAXXZ
    MCAPI void _determineMovePos();

    // NOLINTEND
};
