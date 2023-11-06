#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

class FlyMoveControl : public ::MoveControl {
public:
    // prevent constructor by default
    FlyMoveControl& operator=(FlyMoveControl const&);
    FlyMoveControl(FlyMoveControl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~FlyMoveControl();

    // vIndex: 2, symbol: ?tick@FlyMoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@@Z
    virtual void tick(class MoveControlComponent&, class Mob&);

    // symbol: ??0FlyMoveControl@@QEAA@XZ
    MCAPI FlyMoveControl();

    // NOLINTEND
};
