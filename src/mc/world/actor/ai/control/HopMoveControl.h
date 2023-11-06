#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

class HopMoveControl : public ::MoveControl {
public:
    // prevent constructor by default
    HopMoveControl& operator=(HopMoveControl const&);
    HopMoveControl(HopMoveControl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~HopMoveControl();

    // vIndex: 2, symbol: ?tick@HopMoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@@Z
    virtual void tick(class MoveControlComponent&, class Mob&);

    // vIndex: 3, symbol: ?setWantedPosition@HopMoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@AEBVVec3@@M@Z
    virtual void setWantedPosition(class MoveControlComponent&, class Mob&, class Vec3 const&, float);

    // symbol: ??0HopMoveControl@@QEAA@XZ
    MCAPI HopMoveControl();

    // NOLINTEND
};
