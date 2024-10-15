#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class MeleeAttackBaseGoal : public ::Goal {
public:
    // prevent constructor by default
    MeleeAttackBaseGoal& operator=(MeleeAttackBaseGoal const&);
    MeleeAttackBaseGoal(MeleeAttackBaseGoal const&);
    MeleeAttackBaseGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MeleeAttackBaseGoal();

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 10
    virtual void _attemptMoveToTarget(class Actor& target);

    MCAPI explicit MeleeAttackBaseGoal(class Mob& mob);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _attemptAttackTarget(class Actor& target, bool canReachTarget, bool hasLineOfSight);

    MCAPI void _attemptMoveToTargetPosition(class Actor& target, bool canReachTarget, float targetDistanceSq);

    MCAPI bool _inSunlight(class Actor const& actor) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Mob& mob);

    MCAPI void dtor$();

    MCAPI void _attemptMoveToTarget$(class Actor& target);

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void stop$();

    // NOLINTEND
};
