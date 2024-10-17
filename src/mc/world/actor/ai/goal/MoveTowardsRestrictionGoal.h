#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class MoveTowardsRestrictionGoal : public ::Goal {
public:
    // prevent constructor by default
    MoveTowardsRestrictionGoal& operator=(MoveTowardsRestrictionGoal const&);
    MoveTowardsRestrictionGoal(MoveTowardsRestrictionGoal const&);
    MoveTowardsRestrictionGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveTowardsRestrictionGoal() = default;

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _randomizeWantedPositionTowardsRestriction(class Vec3 const& restrictionCenter);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool canContinueToUse$();

    MCAPI void start$();

    // NOLINTEND
};
