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
    // vIndex: 0
    virtual ~DolphinMoveControl() = default;

    // vIndex: 2
    virtual void tick(class MoveControlComponent& parent, class Mob& mob);

    MCAPI DolphinMoveControl();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI float _calcRotX(float xd, float yd, float zd);

    MCAPI float _calcRotY(float xd, float zd);

    MCAPI bool _clearOfObstacles(class Mob const& mob, float x, float z, int distance) const;

    MCAPI bool _isInWater(class Mob const& mob) const;

    MCAPI void _setupBreach(class Mob& mob);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void tick$(class MoveControlComponent& parent, class Mob& mob);

    // NOLINTEND
};
