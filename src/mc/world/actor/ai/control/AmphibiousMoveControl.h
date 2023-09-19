#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/GenericMoveControl.h"

class AmphibiousMoveControl : public ::GenericMoveControl {
public:
    // prevent constructor by default
    AmphibiousMoveControl& operator=(AmphibiousMoveControl const&);
    AmphibiousMoveControl(AmphibiousMoveControl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?tick@AmphibiousMoveControl@@UEAAXAEAVMoveControlComponent@@AEAVMob@@@Z
    virtual void tick(class MoveControlComponent&, class Mob&);

    // symbol: ??0AmphibiousMoveControl@@QEAA@XZ
    MCAPI AmphibiousMoveControl();

    // NOLINTEND
};
