#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ICameraAPI {
public:
    // ICameraAPI inner types declare
    // clang-format off
    struct CameraMovementData;
    struct ShakeParameters;
    // clang-format on

    // ICameraAPI inner types define
    enum class CameraMovementSpeed : uint {};

    struct CameraMovementData {};

    struct ShakeParameters {};
};
