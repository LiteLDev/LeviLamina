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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~MoveToLavaGoal();

    // symbol: ??0MoveToLavaGoal@@QEAA@AEAVMob@@MHHHM@Z
    MCAPI MoveToLavaGoal(class Mob&, float, int, int, int, float);

    // NOLINTEND
};
