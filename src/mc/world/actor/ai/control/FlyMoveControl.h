#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

// auto generated forward declare list
// clang-format off
class Mob;
class MoveControlComponent;
// clang-format on

class FlyMoveControl : public ::MoveControl {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::MoveControlComponent& parent, ::Mob& mob) /*override*/;

    virtual ~FlyMoveControl() /*override*/ = default;
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
