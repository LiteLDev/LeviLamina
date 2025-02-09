#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Vec3;
struct GameEventMovementTrackingSettings;
struct Tick;
// clang-format on

class GameEventMovementTrackingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Tick>  mNextFlapTick;
    ::ll::TypedStorage<4, 12, ::Vec3> mPrevPos;
    ::ll::TypedStorage<4, 4, float>   mStep;
    ::ll::TypedStorage<4, 4, float>   mNextStep;
    ::ll::TypedStorage<4, 4, float>   mMoveDist;
    ::ll::TypedStorage<1, 1, bool>    mConsiderVerticalComponentForAmphibiousMovement;
    ::ll::TypedStorage<1, 4, ::std::optional<::GameEventMovementTrackingSettings>> mSettings;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initializeFromCode(::Actor& actor, bool considerVerticalComponentForAmphibiousMovement);

    MCAPI bool shouldEmitEntityMoveGameEvent();

    MCAPI bool shouldEmitFlapGameEvent();

    MCAPI bool shouldEmitSwimGameEvent();
    // NOLINTEND
};
