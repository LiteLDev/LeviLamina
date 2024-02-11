#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

class GenericMoveControl : public ::MoveControl {
public:
    // prevent constructor by default
    GenericMoveControl& operator=(GenericMoveControl const&);
    GenericMoveControl(GenericMoveControl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1GenericMoveControl@@UEAA@XZ
    virtual ~GenericMoveControl();

    // vIndex: 1, symbol: ?initializeInternal@GenericMoveControl@@UEAAXAEAVMob@@PEAUMoveControlDescription@@@Z
    virtual void initializeInternal(class Mob& mob, struct MoveControlDescription* description);

    // vIndex: 2, symbol: ?tick@GenericMoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@@Z
    virtual void tick(class MoveControlComponent& parent, class Mob& mob);

    // symbol: ??0GenericMoveControl@@QEAA@XZ
    MCAPI GenericMoveControl();

    // NOLINTEND
};
