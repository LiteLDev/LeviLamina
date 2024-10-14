#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/RandomStrollGoal.h"

class RandomBreachingGoal : public ::RandomStrollGoal {
public:
    // prevent constructor by default
    RandomBreachingGoal& operator=(RandomBreachingGoal const&);
    RandomBreachingGoal(RandomBreachingGoal const&);
    RandomBreachingGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RandomBreachingGoal() = default;

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

    // vIndex: 10
    virtual bool _setWantedPosition();

    MCAPI RandomBreachingGoal(class Mob& mob, float speed, int xzDist, int yDist, int interval, float cooldown);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool _setWantedPosition$();

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canBeInterrupted$();

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void stop$();

    // NOLINTEND
};
