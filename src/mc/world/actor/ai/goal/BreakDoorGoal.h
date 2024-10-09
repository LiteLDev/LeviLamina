#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/DoorInteractGoal.h"

class BreakDoorGoal : public ::DoorInteractGoal {
public:
    // prevent constructor by default
    BreakDoorGoal& operator=(BreakDoorGoal const&);
    BreakDoorGoal(BreakDoorGoal const&);
    BreakDoorGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BreakDoorGoal() = default;

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

    MCAPI explicit BreakDoorGoal(class Mob& mob);

    // NOLINTEND
};
