#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

class HoverMoveControl : public ::MoveControl {
public:
    // prevent constructor by default
    HoverMoveControl& operator=(HoverMoveControl const&);
    HoverMoveControl(HoverMoveControl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?tick@HoverMoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@@Z
    virtual void tick(class MoveControlComponent&, class Mob&);

    // symbol: ??0HoverMoveControl@@QEAA@XZ
    MCAPI HoverMoveControl();

    // NOLINTEND
};
