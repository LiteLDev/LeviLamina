#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/RandomStrollGoal.h"

class WitherRandomAttackPosGoal : public ::RandomStrollGoal {
public:
    // prevent constructor by default
    WitherRandomAttackPosGoal& operator=(WitherRandomAttackPosGoal const&);
    WitherRandomAttackPosGoal(WitherRandomAttackPosGoal const&);
    WitherRandomAttackPosGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WitherRandomAttackPosGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    MCAPI WitherRandomAttackPosGoal(class Mob& mob, float speed, int xzDist, int yDist);

    // NOLINTEND
};
