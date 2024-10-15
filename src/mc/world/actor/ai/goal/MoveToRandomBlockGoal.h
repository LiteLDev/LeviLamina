#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class MoveToRandomBlockGoal : public ::Goal {
public:
    // prevent constructor by default
    MoveToRandomBlockGoal& operator=(MoveToRandomBlockGoal const&);
    MoveToRandomBlockGoal(MoveToRandomBlockGoal const&);
    MoveToRandomBlockGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveToRandomBlockGoal() = default;

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

    MCAPI MoveToRandomBlockGoal(class Mob& mob, float speedModifier, float within, float blockDistance);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _isValidDestinationBlock(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Mob& mob, float speedModifier, float within, float blockDistance);

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
