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
    // vIndex: 0, symbol: __gen_??1FlyMoveControl@@UEAA@XZ
    virtual ~FlyMoveControl() = default;

    // vIndex: 2, symbol: ?tick@FlyMoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@@Z
    virtual void tick(class MoveControlComponent& parent, class Mob& mob);

    // symbol: ??0FlyMoveControl@@QEAA@XZ
    MCAPI FlyMoveControl();

    // NOLINTEND
};
