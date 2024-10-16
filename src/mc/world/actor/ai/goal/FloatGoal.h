#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class FloatGoal : public ::Goal {
public:
    // prevent constructor by default
    FloatGoal& operator=(FloatGoal const&);
    FloatGoal(FloatGoal const&);
    FloatGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FloatGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canUse$();

    MCAPI void tick$();

    // NOLINTEND
};
