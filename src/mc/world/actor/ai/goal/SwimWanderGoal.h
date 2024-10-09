#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SwimWanderGoal : public ::Goal {
public:
    // prevent constructor by default
    SwimWanderGoal& operator=(SwimWanderGoal const&);
    SwimWanderGoal(SwimWanderGoal const&);
    SwimWanderGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SwimWanderGoal() = default;

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

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _setWantedPosition();

    // NOLINTEND
};
