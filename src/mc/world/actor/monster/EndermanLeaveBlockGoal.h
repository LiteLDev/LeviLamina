#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class EndermanLeaveBlockGoal : public ::Goal {
public:
    // prevent constructor by default
    EndermanLeaveBlockGoal& operator=(EndermanLeaveBlockGoal const&);
    EndermanLeaveBlockGoal(EndermanLeaveBlockGoal const&);
    EndermanLeaveBlockGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EndermanLeaveBlockGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI explicit EndermanLeaveBlockGoal(class EnderMan& enderman);

    // NOLINTEND
};
