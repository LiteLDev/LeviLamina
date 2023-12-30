#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

class DolphinMoveControl : public ::MoveControl {
public:
    // prevent constructor by default
    DolphinMoveControl& operator=(DolphinMoveControl const&);
    DolphinMoveControl(DolphinMoveControl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DolphinMoveControl@@UEAA@XZ
    virtual ~DolphinMoveControl() = default;

    // vIndex: 2, symbol: ?tick@DolphinMoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@@Z
    virtual void tick(class MoveControlComponent& parent, class Mob& mob);

    // symbol: ??0DolphinMoveControl@@QEAA@XZ
    MCAPI DolphinMoveControl();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_calcRotX@DolphinMoveControl@@AEAAMMMM@Z
    MCAPI float _calcRotX(float xd, float yd, float zd);

    // symbol: ?_calcRotY@DolphinMoveControl@@AEAAMMM@Z
    MCAPI float _calcRotY(float xd, float zd);

    // symbol: ?_clearOfObstacles@DolphinMoveControl@@AEBA_NAEBVMob@@MMH@Z
    MCAPI bool _clearOfObstacles(class Mob const& mob, float x, float z, int distance) const;

    // symbol: ?_isInWater@DolphinMoveControl@@AEBA_NAEBVMob@@@Z
    MCAPI bool _isInWater(class Mob const& mob) const;

    // symbol: ?_setupBreach@DolphinMoveControl@@AEAAXAEAVMob@@@Z
    MCAPI void _setupBreach(class Mob& mob);

    // NOLINTEND
};
