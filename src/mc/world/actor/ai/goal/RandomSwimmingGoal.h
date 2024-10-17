#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/RandomStrollGoal.h"

class RandomSwimmingGoal : public ::RandomStrollGoal {
public:
    // prevent constructor by default
    RandomSwimmingGoal& operator=(RandomSwimmingGoal const&);
    RandomSwimmingGoal(RandomSwimmingGoal const&);
    RandomSwimmingGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RandomSwimmingGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 10
    virtual bool _setWantedPosition();

    MCAPI RandomSwimmingGoal(class Mob& mob, float speed, int xzDist, int yDist, int interval, bool avoidSurface);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class Mob& mob, float speed, int xzDist, int yDist, int interval, bool avoidSurface);

    MCAPI bool _setWantedPosition$();

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    // NOLINTEND
};
