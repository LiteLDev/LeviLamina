#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityId;
// clang-format on

struct CameraActivationEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityId>> mNewActiveCamera;
    ::ll::TypedStorage<4, 4, ::EasingType>           mEasingType;
    ::ll::TypedStorage<4, 4, float>                  mEasingTime;
    // NOLINTEND
};
