#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class LeapAtTargetGoal : public ::Goal {
public:
    // prevent constructor by default
    LeapAtTargetGoal& operator=(LeapAtTargetGoal const&);
    LeapAtTargetGoal(LeapAtTargetGoal const&);
    LeapAtTargetGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LeapAtTargetGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

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

    MCAPI void start$();

    // NOLINTEND
};
