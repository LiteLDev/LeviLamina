#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/MoveToLiquidGoal.h"

class MoveToWaterGoal : public ::MoveToLiquidGoal {
public:
    // prevent constructor by default
    MoveToWaterGoal& operator=(MoveToWaterGoal const&);
    MoveToWaterGoal(MoveToWaterGoal const&);
    MoveToWaterGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MoveToWaterGoal@@UEAA@XZ
    virtual ~MoveToWaterGoal() = default;

    // symbol: ??0MoveToWaterGoal@@QEAA@AEAVMob@@MHHHM@Z
    MCAPI MoveToWaterGoal(
        class Mob& mob,
        float      speedModifier,
        int        searchRange,
        int        searchHeight,
        int        searchCount,
        float      goalRadius
    );

    // NOLINTEND
};
