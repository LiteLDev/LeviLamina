#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/Control.h"

// auto generated forward declare list
// clang-format off
class Mob;
class MoveControlComponent;
class Vec3;
struct MoveControlDescription;
// clang-format on

class MoveControl : public ::Control {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MoveControl() /*override*/;

    virtual void initializeInternal(::Mob& mob, ::MoveControlDescription const* description);

    virtual void tick(::MoveControlComponent& parent, ::Mob& mob);

    virtual void setWantedPosition(::MoveControlComponent& parent, ::Mob& mob, ::Vec3 const& pos, float speed);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MoveControl();

    MCAPI float
    calculateMoveSpeed(::MoveControlComponent const& parent, ::Mob& mob, ::Vec3 const& endPosition, float maxMoveSpeed);

    MCAPI float calculateYRotation(
        ::MoveControlComponent const& parent,
        ::Mob const&                  mob,
        ::Vec3 const&                 positionDifference,
        float                         maxMoveSpeed
    );

    MCAPI bool shouldSlowSpeed(::MoveControlComponent const& parent, ::Mob const& mob, float endDistanceSqr);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& MIN_SPEED();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $initializeInternal(::Mob& mob, ::MoveControlDescription const* description);

    MCAPI void $tick(::MoveControlComponent& parent, ::Mob& mob);

    MCAPI void $setWantedPosition(::MoveControlComponent& parent, ::Mob& mob, ::Vec3 const& pos, float speed);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
