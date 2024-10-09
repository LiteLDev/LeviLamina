#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class MountPathingGoal : public ::Goal {
public:
    // prevent constructor by default
    MountPathingGoal& operator=(MountPathingGoal const&);
    MountPathingGoal(MountPathingGoal const&);
    MountPathingGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MountPathingGoal() = default;

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

    // vIndex: 10
    virtual float _getAttackReachSqr();

    MCAPI MountPathingGoal(class Mob& mob, float speed, float targetDist, bool trackTarget);

    // NOLINTEND
};
