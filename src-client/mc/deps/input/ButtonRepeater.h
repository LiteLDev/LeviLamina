#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class InputEventQueue;
// clang-format on

class ButtonRepeater {
public:
    // ButtonRepeater inner types declare
    // clang-format off
    struct ButtonTimeTracker;
    // clang-format on

    // ButtonRepeater inner types define
    struct ButtonTimeTracker {};

    using ButtonToTimeTrackerMap = ::std::unordered_map<uint, ::ButtonRepeater::ButtonTimeTracker>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::
        TypedStorage<8, 64, ::std::unordered_map<int, ::std::unordered_map<uint, ::ButtonRepeater::ButtonTimeTracker>>>
            mPerIdTrackerData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ButtonRepeater();

    MCAPI void clearControllerButtonStates(int controllerId);

    MCAPI void tick(::InputEventQueue& queue);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
