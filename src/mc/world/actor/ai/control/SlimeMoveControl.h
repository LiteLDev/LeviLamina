#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

// auto generated forward declare list
// clang-format off
class Mob;
class MoveControlComponent;
// clang-format on

class SlimeMoveControl : public ::MoveControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mJumpDelayTicks;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::MoveControlComponent& parent, ::Mob& mob) /*override*/;

    virtual ~SlimeMoveControl() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int _getJumpDelay(::Mob const& mob);
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
