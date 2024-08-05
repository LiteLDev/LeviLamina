#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RandomLookAroundGoal : public ::Goal {
public:
    // prevent constructor by default
    RandomLookAroundGoal& operator=(RandomLookAroundGoal const&);
    RandomLookAroundGoal(RandomLookAroundGoal const&);
    RandomLookAroundGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RandomLookAroundGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI RandomLookAroundGoal(class Mob& mob, int minLookTime, int maxLookTime, float, float, float probability);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _setRandomLook();

    // NOLINTEND
};
