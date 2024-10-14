#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToGoal.h"

class BaseMoveToBlockGoal : public ::BaseMoveToGoal {
public:
    // prevent constructor by default
    BaseMoveToBlockGoal& operator=(BaseMoveToBlockGoal const&);
    BaseMoveToBlockGoal(BaseMoveToBlockGoal const&);
    BaseMoveToBlockGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BaseMoveToBlockGoal();

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 14
    virtual void _moveToBlock();

    // vIndex: 17
    virtual bool findTargetBlock();

    MCAPI BaseMoveToBlockGoal(
        class Mob& mob,
        float      speedModifier,
        int        searchRange,
        int        searchHeight,
        int        searchCount,
        float      goalRadius,
        float      cooldownTime
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI void _moveToBlock$();

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI bool findTargetBlock$();

    // NOLINTEND
};
