#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class ShulkerPeekGoal : public ::Goal {
public:
    // prevent constructor by default
    ShulkerPeekGoal& operator=(ShulkerPeekGoal const&);
    ShulkerPeekGoal(ShulkerPeekGoal const&);
    ShulkerPeekGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShulkerPeekGoal() = default;

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

    MCAPI explicit ShulkerPeekGoal(class Mob& Mob);

    // NOLINTEND
};
