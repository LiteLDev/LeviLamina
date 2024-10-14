#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RunAroundLikeCrazyGoal : public ::Goal {
public:
    // prevent constructor by default
    RunAroundLikeCrazyGoal& operator=(RunAroundLikeCrazyGoal const&);
    RunAroundLikeCrazyGoal(RunAroundLikeCrazyGoal const&);
    RunAroundLikeCrazyGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RunAroundLikeCrazyGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& debugInfo) const;

    MCAPI RunAroundLikeCrazyGoal(class Mob& mob, float speedModifier);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void appendDebugInfo$(std::string& debugInfo) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    // NOLINTEND
};
