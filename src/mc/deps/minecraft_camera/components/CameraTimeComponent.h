#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraTimeComponent {
public:
    // CameraTimeComponent inner types declare
    // clang-format off
    struct DeltaTime;
    struct ElapsedTime;
    // clang-format on

    // CameraTimeComponent inner types define
    struct DeltaTime {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                  mDeltaTime;
        ::ll::TypedStorage<4, 8, ::std::optional<float>> mElapsedTime;
        // NOLINTEND
    };

    struct ElapsedTime {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mElapsedTime;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mUpdatedAt;
    ::ll::TypedStorage<4, 4, float> mDeltaTime;
    // NOLINTEND
};

} // namespace MinecraftCamera
