#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class MoveThroughVillageGoal : public ::Goal {
public:
    // prevent constructor by default
    MoveThroughVillageGoal& operator=(MoveThroughVillageGoal const&);
    MoveThroughVillageGoal(MoveThroughVillageGoal const&);
    MoveThroughVillageGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveThroughVillageGoal() = default;

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

    MCAPI MoveThroughVillageGoal(class Mob& mob, float speedModifier, bool onlyAtNight);

    // NOLINTEND
};
