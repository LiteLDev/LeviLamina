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
    struct DeltaTime {};

    struct ElapsedTime {};
};

} // namespace MinecraftCamera
