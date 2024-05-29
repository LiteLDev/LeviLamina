#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RangedAttackGoal : public ::Goal {
public:
    // prevent constructor by default
    RangedAttackGoal& operator=(RangedAttackGoal const&);
    RangedAttackGoal(RangedAttackGoal const&);
    RangedAttackGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RangedAttackGoal@@UEAA@XZ
    virtual ~RangedAttackGoal() = default;

    // vIndex: 1, symbol: ?canUse@RangedAttackGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@RangedAttackGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@RangedAttackGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@RangedAttackGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@RangedAttackGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@RangedAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0RangedAttackGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit RangedAttackGoal(class Mob& mob);

    // symbol: ?handleAttackBehavior@RangedAttackGoal@@QEAAXPEAVActor@@AEBVVec3@@M_N@Z
    MCAPI void handleAttackBehavior(
        class Actor*      lockedTarget,
        class Vec3 const& lockedTargetPos,
        float             targetDistanceSq,
        bool              canSee
    );

    // NOLINTEND
};
