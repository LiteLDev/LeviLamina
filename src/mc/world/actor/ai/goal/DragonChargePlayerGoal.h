#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/DragonBaseGoal.h"

class DragonChargePlayerGoal : public ::DragonBaseGoal {
public:
    // prevent constructor by default
    DragonChargePlayerGoal& operator=(DragonChargePlayerGoal const&);
    DragonChargePlayerGoal(DragonChargePlayerGoal const&);
    DragonChargePlayerGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DragonChargePlayerGoal() = default;

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

    MCAPI explicit DragonChargePlayerGoal(class Mob& mob);

    // NOLINTEND
};
