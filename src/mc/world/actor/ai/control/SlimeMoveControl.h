#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

class SlimeMoveControl : public ::MoveControl {
public:
    // prevent constructor by default
    SlimeMoveControl& operator=(SlimeMoveControl const&);
    SlimeMoveControl(SlimeMoveControl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?tick@SlimeMoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@@Z
    virtual void tick(class MoveControlComponent&, class Mob&);

    // symbol: ??0SlimeMoveControl@@QEAA@XZ
    MCAPI SlimeMoveControl();

    // NOLINTEND
};
