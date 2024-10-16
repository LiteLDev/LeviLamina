#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RandomHoverGoal : public ::Goal {
public:
    // prevent constructor by default
    RandomHoverGoal& operator=(RandomHoverGoal const&);
    RandomHoverGoal(RandomHoverGoal const&);
    RandomHoverGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RandomHoverGoal() = default;

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

    MCAPI RandomHoverGoal(
        class Mob&      mob,
        float           speedMultiplier,
        int             interval,
        float           xzDist,
        float           yDist,
        float           yOffset,
        struct IntRange hoverHeight
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _computeNewTarget();

    MCAPI std::unique_ptr<class Path> _findNewTarget() const;

    MCAPI void _moveToTarget();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        class Mob&      mob,
        float           speedMultiplier,
        int             interval,
        float           xzDist,
        float           yDist,
        float           yOffset,
        struct IntRange hoverHeight
    );

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void tick$();

    // NOLINTEND
};
