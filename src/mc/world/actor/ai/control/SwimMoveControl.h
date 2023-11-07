#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

class SwimMoveControl : public ::MoveControl {
public:
    // prevent constructor by default
    SwimMoveControl& operator=(SwimMoveControl const&);
    SwimMoveControl(SwimMoveControl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~SwimMoveControl() = default;

    // vIndex: 1, symbol: ?initializeInternal@SwimMoveControl@@UEAAXAEAVMob@@PEAUMoveControlDescription@@@Z
    virtual void initializeInternal(class Mob&, struct MoveControlDescription*);

    // vIndex: 2, symbol: ?tick@SwimMoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@@Z
    virtual void tick(class MoveControlComponent&, class Mob&);

    // symbol: ??0SwimMoveControl@@QEAA@XZ
    MCAPI SwimMoveControl();

    // NOLINTEND
};
