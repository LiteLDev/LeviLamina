#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class HoverGoal : public ::Goal {
public:
    // prevent constructor by default
    HoverGoal& operator=(HoverGoal const&);
    HoverGoal(HoverGoal const&);
    HoverGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HoverGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI HoverGoal(class Mob& mob, float speedMultiplier);

    // NOLINTEND
};
