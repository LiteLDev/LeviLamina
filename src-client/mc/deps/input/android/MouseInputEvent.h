#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MouseProcessorAndroid {

struct MouseInputEvent {
public:
    // MouseInputEvent inner types define
    enum class Action : uchar {
        Invalid   = 0,
        Scroll    = 1,
        Move      = 2,
        HoverMove = 3,
        Interact  = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::MouseProcessorAndroid::MouseInputEvent::Action> mAction;
    ::ll::TypedStorage<4, 4, int>                                              mButtonState;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                      mCursorPosition;
    ::ll::TypedStorage<4, 4, int>                                              mExplicitScrollData;
    // NOLINTEND
};

} // namespace MouseProcessorAndroid
