#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SlimeAttackGoal : public ::Goal {
public:
    // prevent constructor by default
    SlimeAttackGoal& operator=(SlimeAttackGoal const&);
    SlimeAttackGoal(SlimeAttackGoal const&);
    SlimeAttackGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SlimeAttackGoal() = default;

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
};
