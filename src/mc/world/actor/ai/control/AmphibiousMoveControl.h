#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/GenericMoveControl.h"

// auto generated forward declare list
// clang-format off
class Mob;
class MoveControlComponent;
// clang-format on

class AmphibiousMoveControl : public ::GenericMoveControl {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::MoveControlComponent& parent, ::Mob& mob) /*override*/;

    virtual ~AmphibiousMoveControl() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::MoveControlComponent& parent, ::Mob& mob);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
