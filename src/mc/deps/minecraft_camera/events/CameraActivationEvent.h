#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/game_refs/WeakRef.h"

struct CameraActivationEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityId>> mNewActiveCamera;
    ::ll::TypedStorage<4, 4, ::EasingType>           mEasingType;
    ::ll::TypedStorage<4, 4, float>                  mEasingTime;
    // NOLINTEND
};
