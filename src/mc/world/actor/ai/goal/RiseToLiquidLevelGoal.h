#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RiseToLiquidLevelGoal : public ::Goal {
public:
    // prevent constructor by default
    RiseToLiquidLevelGoal& operator=(RiseToLiquidLevelGoal const&);
    RiseToLiquidLevelGoal(RiseToLiquidLevelGoal const&);
    RiseToLiquidLevelGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RiseToLiquidLevelGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI RiseToLiquidLevelGoal(class Mob& mob, float liquidYOffset, float riseDelta, float sinkDelta);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Mob& mob, float liquidYOffset, float riseDelta, float sinkDelta);

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canUse$();

    MCAPI void tick$();

    // NOLINTEND
};
