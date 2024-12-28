#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class GameEventMovementTrackingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk4ee6b2;
    ::ll::UntypedStorage<4, 12> mUnkb20272;
    ::ll::UntypedStorage<4, 4>  mUnkf12a96;
    ::ll::UntypedStorage<4, 4>  mUnk8c5854;
    ::ll::UntypedStorage<4, 4>  mUnkbeb8bf;
    ::ll::UntypedStorage<1, 1>  mUnk4acd52;
    ::ll::UntypedStorage<1, 4>  mUnk6a6a40;
    // NOLINTEND

public:
    // prevent constructor by default
    GameEventMovementTrackingComponent& operator=(GameEventMovementTrackingComponent const&);
    GameEventMovementTrackingComponent(GameEventMovementTrackingComponent const&);
    GameEventMovementTrackingComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initializeFromCode(::Actor& actor, bool considerVerticalComponentForAmphibiousMovement);

    MCAPI bool shouldEmitEntityMoveGameEvent();

    MCAPI bool shouldEmitFlapGameEvent();

    MCAPI bool shouldEmitSwimGameEvent();
    // NOLINTEND
};
