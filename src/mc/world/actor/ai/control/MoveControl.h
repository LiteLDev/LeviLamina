#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/Control.h"

class MoveControl : public ::Control {
public:
    // prevent constructor by default
    MoveControl& operator=(MoveControl const&);
    MoveControl(MoveControl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MoveControl@@UEAA@XZ
    virtual ~MoveControl() = default;

    // vIndex: 1, symbol: ?initializeInternal@MoveControl@@UEAAXAEAVMob@@PEAUMoveControlDescription@@@Z
    virtual void initializeInternal(class Mob& mob, struct MoveControlDescription* description);

    // vIndex: 2, symbol: ?tick@MoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@@Z
    virtual void tick(class MoveControlComponent& parent, class Mob& mob);

    // vIndex: 3, symbol: ?setWantedPosition@MoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@AEBVVec3@@M@Z
    virtual void
    setWantedPosition(class MoveControlComponent& parent, class Mob&, class Vec3 const& position, float speed);

    // symbol: ??0MoveControl@@QEAA@XZ
    MCAPI MoveControl();

    // symbol: ?getDiffVector@MoveControl@@SA?AVVec3@@AEBV2@AEBVMob@@@Z
    MCAPI static class Vec3 getDiffVector(class Vec3 const&, class Mob const& mob);

    // symbol: ?MIN_DELTA_TO_JUMP@MoveControl@@2MB
    MCAPI static float const MIN_DELTA_TO_JUMP;

    // symbol: ?MIN_DELTA_TO_JUMP_UNDERWATER@MoveControl@@2MB
    MCAPI static float const MIN_DELTA_TO_JUMP_UNDERWATER;

    // symbol: ?MIN_DELTA_TO_MOVE@MoveControl@@2MB
    MCAPI static float const MIN_DELTA_TO_MOVE;

    // symbol: ?MIN_SPEED@MoveControl@@2MB
    MCAPI static float const MIN_SPEED;

    // symbol: ?MIN_SPEED_SQR@MoveControl@@2MB
    MCAPI static float const MIN_SPEED_SQR;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?calculateMoveSpeed@MoveControl@@IEAAMAEBVMoveControlComponent@@AEAVMob@@AEBVVec3@@M@Z
    MCAPI float calculateMoveSpeed(
        class MoveControlComponent const& parent,
        class Mob&                        mob,
        class Vec3 const&                 endPosition,
        float                             maxMoveSpeed
    );

    // symbol: ?calculateYRotation@MoveControl@@IEAAMAEBVMoveControlComponent@@AEBVMob@@AEBVVec3@@M@Z
    MCAPI float calculateYRotation(
        class MoveControlComponent const& parent,
        class Mob const&                  mob,
        class Vec3 const&                 positionDifference,
        float                             maxMoveSpeed
    );

    // NOLINTEND
};
