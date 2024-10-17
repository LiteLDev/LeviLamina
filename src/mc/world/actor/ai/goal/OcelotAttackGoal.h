#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class OcelotAttackGoal : public ::Goal {
public:
    // prevent constructor by default
    OcelotAttackGoal& operator=(OcelotAttackGoal const&);
    OcelotAttackGoal(OcelotAttackGoal const&);
    OcelotAttackGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OcelotAttackGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI explicit OcelotAttackGoal(class Mob& mob);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class Mob& mob);

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
