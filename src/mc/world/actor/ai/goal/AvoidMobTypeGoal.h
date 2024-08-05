#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class AvoidMobTypeGoal : public ::Goal {
public:
    // prevent constructor by default
    AvoidMobTypeGoal& operator=(AvoidMobTypeGoal const&);
    AvoidMobTypeGoal(AvoidMobTypeGoal const&);
    AvoidMobTypeGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AvoidMobTypeGoal() = default;

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

    MCAPI explicit AvoidMobTypeGoal(class Mob& mob);

    MCAPI bool canFindAvoidPath(class Actor* actor);

    MCAPI class Actor* findNearestEntityToAvoid(float dist);

    // NOLINTEND
};
