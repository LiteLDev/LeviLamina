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
    // vIndex: 0
    virtual ~MoveControl();

    // vIndex: 1
    virtual void initializeInternal(class Mob& mob, struct MoveControlDescription* description);

    // vIndex: 2
    virtual void tick(class MoveControlComponent& parent, class Mob& mob);

    // vIndex: 3
    virtual void
    setWantedPosition(class MoveControlComponent& parent, class Mob&, class Vec3 const& position, float speed);

    MCAPI MoveControl();

    MCAPI static class Vec3 getDiffVector(class Vec3 const&, class Mob const& mob);

    MCAPI static float const MIN_DELTA_TO_JUMP;

    MCAPI static float const MIN_DELTA_TO_JUMP_UNDERWATER;

    MCAPI static float const MIN_DELTA_TO_MOVE;

    MCAPI static float const MIN_SPEED;

    MCAPI static float const MIN_SPEED_SQR;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI float calculateMoveSpeed(
        class MoveControlComponent const& parent,
        class Mob&                        mob,
        class Vec3 const&                 endPosition,
        float                             maxMoveSpeed
    );

    MCAPI float calculateYRotation(
        class MoveControlComponent const& parent,
        class Mob const&                  mob,
        class Vec3 const&                 positionDifference,
        float                             maxMoveSpeed
    );

    // NOLINTEND
};
