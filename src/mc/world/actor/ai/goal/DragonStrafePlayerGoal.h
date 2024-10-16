#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/DragonBaseGoal.h"

class DragonStrafePlayerGoal : public ::DragonBaseGoal {
public:
    // prevent constructor by default
    DragonStrafePlayerGoal& operator=(DragonStrafePlayerGoal const&);
    DragonStrafePlayerGoal(DragonStrafePlayerGoal const&);
    DragonStrafePlayerGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DragonStrafePlayerGoal() = default;

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

    MCAPI explicit DragonStrafePlayerGoal(class Mob& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void findNewTarget();

    MCAPI void navigateToNextPathNode();

    MCAPI void setTarget(class Actor* target);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class Mob& mob);

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
