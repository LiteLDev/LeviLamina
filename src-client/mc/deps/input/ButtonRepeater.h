#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/BasicTimer.h"
#include "mc/deps/input/InputEvent.h"
#include "mc/deps/input/enums/ButtonState.h"

class ButtonRepeater {
public:
    // ButtonRepeater inner types declare
    // clang-format off
    struct ButtonTimeTracker;
    // clang-format on

    // ButtonRepeater inner types define
    struct ButtonTimeTracker {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 80, ::BasicTimer> mRepeatTimer;
        ::ll::TypedStorage<1, 1, ::ButtonState> mCurrentState;
        ::ll::TypedStorage<4, 56, ::InputEvent> mEventToSend;
        // NOLINTEND
    };

    using ButtonToTimeTrackerMap = ::std::unordered_map<uint, ::ButtonRepeater::ButtonTimeTracker>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::
        TypedStorage<8, 64, ::std::unordered_map<int, ::std::unordered_map<uint, ::ButtonRepeater::ButtonTimeTracker>>>
            mPerIdTrackerData;
    // NOLINTEND
};
