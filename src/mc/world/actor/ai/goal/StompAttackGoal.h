#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/MeleeAttackGoal.h"

class StompAttackGoal : public ::MeleeAttackGoal {
public:
    // prevent constructor by default
    StompAttackGoal& operator=(StompAttackGoal const&);
    StompAttackGoal(StompAttackGoal const&);
    StompAttackGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StompAttackGoal() = default;

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

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _attemptAttack(class Actor& target);

    // NOLINTEND
};
