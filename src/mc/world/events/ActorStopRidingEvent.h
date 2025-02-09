#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
// clang-format on

struct ActorStopRidingEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mPassenger;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mVehicle;
    ::ll::TypedStorage<1, 1, bool>             exitFromPassenger;
    ::ll::TypedStorage<1, 1, bool>             actorIsBeingDestroyed;
    ::ll::TypedStorage<1, 1, bool>             switchingVehicles;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorStopRidingEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
