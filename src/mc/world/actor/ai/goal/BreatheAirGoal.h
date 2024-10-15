#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class BreatheAirGoal : public ::Goal {
public:
    // prevent constructor by default
    BreatheAirGoal& operator=(BreatheAirGoal const&);
    BreatheAirGoal(BreatheAirGoal const&);
    BreatheAirGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BreatheAirGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 3
    virtual bool canBeInterrupted();

    // vIndex: 4
    virtual void start();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI explicit BreatheAirGoal(class Mob& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI int _determineApproximateDepth();

    MCAPI void _findAirPosition();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Mob& mob);

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canBeInterrupted$();

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void tick$();

    // NOLINTEND
};
