#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MouseProcessorAndroid {
public:
    // MouseProcessorAndroid inner types declare
    // clang-format off
    struct MouseInputEvent;
    // clang-format on

    // MouseProcessorAndroid inner types define
    enum class MouseType : int {};

    struct MouseInputEvent {
    public:
        // MouseInputEvent inner types define
        enum class Action : uchar {};
    };
};
