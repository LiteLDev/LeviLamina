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
    // vIndex: 0
    virtual ~AmphibiousMoveControl() = default;

    // vIndex: 2
    virtual void tick(class MoveControlComponent& parent, class Mob& mob);

    MCAPI AmphibiousMoveControl();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void tick$(class MoveControlComponent& parent, class Mob& mob);

    // NOLINTEND
};
