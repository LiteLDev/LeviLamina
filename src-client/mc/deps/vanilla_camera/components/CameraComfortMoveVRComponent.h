#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VanillaCamera {

struct CameraComfortMoveVRComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mLinearYRemap;
    ::ll::TypedStorage<4, 4, float> mMaxLinearYRemap;
    ::ll::TypedStorage<4, 4, float> mStartYPos;
    ::ll::TypedStorage<4, 4, float> mAccumulatedDT;
    ::ll::TypedStorage<1, 1, bool>  mYMotionUp;
    // NOLINTEND
};

} // namespace VanillaCamera
