#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/MoveToLiquidGoal.h"

class MoveToLavaGoal : public ::MoveToLiquidGoal {
public:
    // prevent constructor by default
    MoveToLavaGoal& operator=(MoveToLavaGoal const&);
    MoveToLavaGoal(MoveToLavaGoal const&);
    MoveToLavaGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MoveToLavaGoal@@UEAA@XZ
    virtual ~MoveToLavaGoal() = default;

    // symbol: ??0MoveToLavaGoal@@QEAA@AEAVMob@@MHHHM@Z
    MCAPI MoveToLavaGoal(
        class Mob& mob,
        float      speedModifier,
        int        searchRange,
        int        searchHeight,
        int        searchCount,
        float      goalRadius
    );

    // NOLINTEND
};
