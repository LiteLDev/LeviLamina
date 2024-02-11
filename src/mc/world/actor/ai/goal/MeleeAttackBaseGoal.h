#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class MeleeAttackBaseGoal : public ::Goal {
public:
    // prevent constructor by default
    MeleeAttackBaseGoal& operator=(MeleeAttackBaseGoal const&);
    MeleeAttackBaseGoal(MeleeAttackBaseGoal const&);
    MeleeAttackBaseGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1MeleeAttackBaseGoal@@UEAA@XZ
    virtual ~MeleeAttackBaseGoal();

    // vIndex: 1, symbol: ?canUse@MeleeAttackBaseGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@MeleeAttackBaseGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@MeleeAttackBaseGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@MeleeAttackBaseGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 10, symbol: ?_attemptMoveToTarget@MeleeAttackBaseGoal@@MEAAXAEAVActor@@@Z
    virtual void _attemptMoveToTarget(class Actor&);

    // symbol: ??0MeleeAttackBaseGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit MeleeAttackBaseGoal(class Mob&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_attemptAttackTarget@MeleeAttackBaseGoal@@IEAAXAEAVActor@@_N1@Z
    MCAPI void _attemptAttackTarget(class Actor&, bool, bool);

    // symbol: ?_attemptMoveToTargetPosition@MeleeAttackBaseGoal@@IEAAXAEAVActor@@_NM@Z
    MCAPI void _attemptMoveToTargetPosition(class Actor&, bool, float);

    // symbol: ?_inSunlight@MeleeAttackBaseGoal@@IEBA_NAEBVActor@@@Z
    MCAPI bool _inSunlight(class Actor const&) const;

    // NOLINTEND
};
