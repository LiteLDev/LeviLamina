#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

class HoverMoveControl : public ::MoveControl {
public:
    // prevent constructor by default
    HoverMoveControl& operator=(HoverMoveControl const&);
    HoverMoveControl(HoverMoveControl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HoverMoveControl() = default;

    // vIndex: 2
    virtual void tick(class MoveControlComponent& parent, class Mob& mob);

    MCAPI HoverMoveControl();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void tick$(class MoveControlComponent& parent, class Mob& mob);

    // NOLINTEND
};
