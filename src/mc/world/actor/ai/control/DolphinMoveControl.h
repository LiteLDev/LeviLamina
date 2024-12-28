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
    ::ll::UntypedStorage<1, 1> mUnk3cb88d;
    // NOLINTEND

public:
    // prevent constructor by default
    DolphinMoveControl& operator=(DolphinMoveControl const&);
    DolphinMoveControl(DolphinMoveControl const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void tick(::MoveControlComponent& parent, ::Mob& mob) /*override*/;

    // vIndex: 0
    virtual ~DolphinMoveControl() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DolphinMoveControl();

    MCAPI float _calcRotX(float xd, float yd, float zd);

    MCAPI bool _clearOfObstacles(::Mob const& mob, float x, float z, int distance) const;

    MCAPI void _handleBreaching(::Mob& mob);

    MCAPI bool _isInWater(::Mob const& mob) const;

    MCAPI void _setupBreach(::Mob& mob);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::MoveControlComponent& parent, ::Mob& mob);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
