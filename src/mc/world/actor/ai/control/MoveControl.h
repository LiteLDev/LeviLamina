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
    // vIndex: 0
    virtual ~MoveControl() /*override*/ = default;

    // vIndex: 1
    virtual void initializeInternal(::Mob& mob, ::MoveControlDescription* description);

    // vIndex: 2
    virtual void tick(::MoveControlComponent& parent, ::Mob& mob);

    // vIndex: 3
    virtual void setWantedPosition(::MoveControlComponent& parent, ::Mob&, ::Vec3 const& position, float speed);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI float
    calculateMoveSpeed(::MoveControlComponent const& parent, ::Mob& mob, ::Vec3 const& endPosition, float maxMoveSpeed);

    MCNAPI float calculateYRotation(
        ::MoveControlComponent const& parent,
        ::Mob const&                  mob,
        ::Vec3 const&                 positionDifference,
        float                         maxMoveSpeed
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Vec3 getDiffVector(::Vec3 const& wantedPosition, ::Mob const& mob);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& MIN_DELTA_TO_MOVE();

    MCAPI static float const& MIN_SPEED_SQR();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeInternal(::Mob& mob, ::MoveControlDescription* description);

    MCNAPI void $tick(::MoveControlComponent& parent, ::Mob& mob);

    MCNAPI void $setWantedPosition(::MoveControlComponent& parent, ::Mob&, ::Vec3 const& position, float speed);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
