#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"

namespace CameraInstructionOptions {

struct FovInstruction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>        mFov;
    ::ll::TypedStorage<1, 1, bool>         mFovClear;
    ::ll::TypedStorage<4, 4, float>        mFovEaseTime;
    ::ll::TypedStorage<4, 4, ::EasingType> mFovEaseType;
    // NOLINTEND
};

} // namespace CameraInstructionOptions
