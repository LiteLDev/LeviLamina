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
    virtual void _attemptMoveToTarget(class Actor&);

    MCAPI explicit MeleeAttackBaseGoal(class Mob&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _attemptAttackTarget(class Actor&, bool, bool);

    MCAPI void _attemptMoveToTargetPosition(class Actor&, bool, float);

    MCAPI bool _inSunlight(class Actor const&) const;

    // NOLINTEND
};
