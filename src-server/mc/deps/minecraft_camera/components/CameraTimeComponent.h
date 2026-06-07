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
    struct ElapsedTime {};

    struct DeltaTime {};
};

} // namespace MinecraftCamera
