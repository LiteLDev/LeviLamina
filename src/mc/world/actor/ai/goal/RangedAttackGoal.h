#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RangedAttackGoal : public ::Goal {
public:
    // prevent constructor by default
    RangedAttackGoal& operator=(RangedAttackGoal const&);
    RangedAttackGoal(RangedAttackGoal const&);
    RangedAttackGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RangedAttackGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI void handleAttackBehavior(
        class Actor*      lockedTarget,
        class Vec3 const& lockedTargetPos,
        float             targetDistanceSq,
        bool              canSee
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
