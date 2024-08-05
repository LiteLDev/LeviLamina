#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class MoveTowardsTargetGoal : public ::Goal {
public:
    // prevent constructor by default
    MoveTowardsTargetGoal& operator=(MoveTowardsTargetGoal const&);
    MoveTowardsTargetGoal(MoveTowardsTargetGoal const&);
    MoveTowardsTargetGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveTowardsTargetGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI MoveTowardsTargetGoal(class Mob& pathMob, float speedModifier, float within);

    // NOLINTEND
};
