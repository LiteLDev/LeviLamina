#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BatchClippingState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec2> mTopLeftClip;
    ::ll::TypedStorage<4, 8, ::glm::vec2> mBottomRightClip;
    ::ll::TypedStorage<1, 1, bool>        mClipsChildren;
    ::ll::TypedStorage<1, 1, bool>        mEnableScissorTest;
    // NOLINTEND
};
