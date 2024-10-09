#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SlimeKeepOnJumpingGoal : public ::Goal {
public:
    // prevent constructor by default
    SlimeKeepOnJumpingGoal& operator=(SlimeKeepOnJumpingGoal const&);
    SlimeKeepOnJumpingGoal(SlimeKeepOnJumpingGoal const&);
    SlimeKeepOnJumpingGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SlimeKeepOnJumpingGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // NOLINTEND
};
