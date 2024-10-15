#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/MoveToLiquidGoal.h"

class MoveToWaterGoal : public ::MoveToLiquidGoal {
public:
    // prevent constructor by default
    MoveToWaterGoal& operator=(MoveToWaterGoal const&);
    MoveToWaterGoal(MoveToWaterGoal const&);
    MoveToWaterGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveToWaterGoal() = default;

    MCAPI MoveToWaterGoal(
        class Mob& mob,
        float      speedModifier,
        int        searchRange,
        int        searchHeight,
        int        searchCount,
        float      goalRadius
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void*
    ctor$(class Mob& mob, float speedModifier, int searchRange, int searchHeight, int searchCount, float goalRadius);

    // NOLINTEND
};
