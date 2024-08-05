#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class TargetWhenPushedGoal : public ::Goal {
public:
    // prevent constructor by default
    TargetWhenPushedGoal& operator=(TargetWhenPushedGoal const&);
    TargetWhenPushedGoal(TargetWhenPushedGoal const&);
    TargetWhenPushedGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TargetWhenPushedGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 3
    virtual bool canBeInterrupted();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI TargetWhenPushedGoal(class Mob& mob, std::vector<struct MobDescriptor> targetTypes, float percentChance);

    // NOLINTEND
};
