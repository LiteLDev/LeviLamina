#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/LookAtActorGoal.h"

class LookAtTradingPlayerGoal : public ::LookAtActorGoal {
public:
    // prevent constructor by default
    LookAtTradingPlayerGoal& operator=(LookAtTradingPlayerGoal const&);
    LookAtTradingPlayerGoal(LookAtTradingPlayerGoal const&);
    LookAtTradingPlayerGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LookAtTradingPlayerGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    // NOLINTEND
};
