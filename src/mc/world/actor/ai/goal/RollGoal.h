#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RollGoal : public ::Goal {
public:
    // prevent constructor by default
    RollGoal& operator=(RollGoal const&);
    RollGoal(RollGoal const&);
    RollGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RollGoal() = default;

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

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI RollGoal(class Mob& mob, float probability);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _handleRoll(int rollCounter, class Vec3& positionDelta, float& rollX, float& rollZ) const;

    // NOLINTEND
};
