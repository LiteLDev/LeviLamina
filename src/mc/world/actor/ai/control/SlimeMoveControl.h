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
    // vIndex: 0, symbol: __gen_??1SlimeMoveControl@@UEAA@XZ
    virtual ~SlimeMoveControl() = default;

    // vIndex: 2, symbol: ?tick@SlimeMoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@@Z
    virtual void tick(class MoveControlComponent& parent, class Mob& mob);

    // symbol: ??0SlimeMoveControl@@QEAA@XZ
    MCAPI SlimeMoveControl();

    // NOLINTEND
};
