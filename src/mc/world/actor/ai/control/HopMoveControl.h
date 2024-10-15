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
    // vIndex: 0
    virtual ~HopMoveControl() = default;

    // vIndex: 2
    virtual void tick(class MoveControlComponent& parent, class Mob& mob);

    // vIndex: 3
    virtual void
    setWantedPosition(class MoveControlComponent& parent, class Mob& mob, class Vec3 const& pos, float speed);

    MCAPI HopMoveControl();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void
    setWantedPosition$(class MoveControlComponent& parent, class Mob& mob, class Vec3 const& pos, float speed);

    MCAPI void tick$(class MoveControlComponent& parent, class Mob& mob);

    // NOLINTEND
};
