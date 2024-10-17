#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RandomSitGoal : public ::Goal {
public:
    // prevent constructor by default
    RandomSitGoal& operator=(RandomSitGoal const&);
    RandomSitGoal(RandomSitGoal const&);
    RandomSitGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RandomSitGoal() = default;

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

    MCAPI RandomSitGoal(class Mob& mob, float startChance, float stopChance, float cooldown, float minTime);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class Mob& mob, float startChance, float stopChance, float cooldown, float minTime);

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void stop$();

    // NOLINTEND
};
