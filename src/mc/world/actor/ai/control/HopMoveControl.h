#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

// auto generated forward declare list
// clang-format off
class Mob;
class MoveControlComponent;
class Vec3;
// clang-format on

class HopMoveControl : public ::MoveControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk3fc944;
    // NOLINTEND

public:
    // prevent constructor by default
    HopMoveControl& operator=(HopMoveControl const&);
    HopMoveControl(HopMoveControl const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void tick(::MoveControlComponent& parent, ::Mob& mob) /*override*/;

    // vIndex: 3
    virtual void
    setWantedPosition(::MoveControlComponent& parent, ::Mob& mob, ::Vec3 const& pos, float speed) /*override*/;

    // vIndex: 0
    virtual ~HopMoveControl() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HopMoveControl();
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

    MCAPI void $setWantedPosition(::MoveControlComponent& parent, ::Mob& mob, ::Vec3 const& pos, float speed);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
