#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RiverFollowingGoal : public ::Goal {
public:
    // prevent constructor by default
    RiverFollowingGoal& operator=(RiverFollowingGoal const&);
    RiverFollowingGoal(RiverFollowingGoal const&);
    RiverFollowingGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RiverFollowingGoal() = default;

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

    MCAPI RiverFollowingGoal(class Mob& mob, float lookAhead, float speed);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void determineSteerDirection();

    // NOLINTEND
};
