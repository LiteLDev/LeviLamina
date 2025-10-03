#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ai/control/MoveControl.h"

// auto generated forward declare list
// clang-format off
class Mob;
class MoveControlComponent;
struct MoveControlDescription;
// clang-format on

class GlideMoveControl : public ::MoveControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>   mSpeed;
    ::ll::TypedStorage<4, 4, float>   mStartSpeed;
    ::ll::TypedStorage<4, 4, float>   mSpeedWhenTurning;
    ::ll::TypedStorage<4, 12, ::Vec3> mCurrentWantedPos;
    ::ll::TypedStorage<4, 4, int>     mNumberOfFrontalCollisions;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void initializeInternal(::Mob& mob, ::MoveControlDescription* description) /*override*/;

    // vIndex: 2
    virtual void tick(::MoveControlComponent& parent, ::Mob& mob) /*override*/;

    // vIndex: 0
    virtual ~GlideMoveControl() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeInternal(::Mob& mob, ::MoveControlDescription* description);

    MCNAPI void $tick(::MoveControlComponent& parent, ::Mob& mob);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
