#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/MoveTowardsRestrictionGoal.h"

class MoveTowardsHomeRestrictionGoal : public ::MoveTowardsRestrictionGoal {
public:
    // prevent constructor by default
    MoveTowardsHomeRestrictionGoal& operator=(MoveTowardsHomeRestrictionGoal const&);
    MoveTowardsHomeRestrictionGoal(MoveTowardsHomeRestrictionGoal const&);
    MoveTowardsHomeRestrictionGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveTowardsHomeRestrictionGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI explicit MoveTowardsHomeRestrictionGoal(class Mob& mob);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class Mob& mob);

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canUse$();

    // NOLINTEND
};
