#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"

class CameraGlobalInstructionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::std::optional<uint>> mPresetIndex;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>> mDelayPresetIndex;
    ::ll::TypedStorage<4, 4, ::EasingType>          mEasingType;
    ::ll::TypedStorage<4, 4, float>                 mEasingTime;
    // NOLINTEND
};
