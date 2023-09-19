#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class DragonBaseGoal : public ::Goal {
public:
    // prevent constructor by default
    DragonBaseGoal& operator=(DragonBaseGoal const&);
    DragonBaseGoal(DragonBaseGoal const&);
    DragonBaseGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1DragonBaseGoal@@UEAA@XZ
    MCVAPI ~DragonBaseGoal();

    // symbol: ??0DragonBaseGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit DragonBaseGoal(class Mob&);

    // NOLINTEND
};
