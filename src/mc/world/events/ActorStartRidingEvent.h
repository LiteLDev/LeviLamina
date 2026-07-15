#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"

struct ActorStartRidingEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mPassenger;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mVehicle;
    // NOLINTEND
};
