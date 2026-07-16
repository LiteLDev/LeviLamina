#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraTimeComponent {
public:
    // CameraTimeComponent inner types declare
    // clang-format off
    struct ElapsedTime;
    struct DeltaTime;
    // clang-format on

    // CameraTimeComponent inner types define
    struct ElapsedTime {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mElapsedTime;
        // NOLINTEND
    };

    struct DeltaTime {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mUpdatedAt;
    ::ll::TypedStorage<4, 4, float> mDeltaTime;
    // NOLINTEND
};

} // namespace MinecraftCamera
