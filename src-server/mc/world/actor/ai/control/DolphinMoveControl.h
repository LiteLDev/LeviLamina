#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

// auto generated forward declare list
// clang-format off
class Mob;
class MoveControlComponent;
// clang-format on

class DolphinMoveControl : public ::MoveControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mBreaching;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void tick(::MoveControlComponent& parent, ::Mob& mob) /*override*/;

    // vIndex: 0
    virtual ~DolphinMoveControl() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _clearOfObstacles(::Mob const& mob, float x, float z, int distance) const;

    MCNAPI void _handleBreaching(::Mob& mob);

    MCNAPI bool _isInWater(::Mob const& mob) const;

    MCNAPI void _setupBreach(::Mob& mob);
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
