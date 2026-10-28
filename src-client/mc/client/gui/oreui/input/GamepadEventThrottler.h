#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class GamepadEventThrottler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 160, ::std::array<int, 40>> mButtonEventCounters;
    ::ll::TypedStorage<8, 640, ::std::array<::std::optional<::std::chrono::steady_clock::time_point>, 40>>
        mButtonLongPressTimestamps;
    ::ll::TypedStorage<8, 96, ::std::array<::std::chrono::steady_clock::time_point, 12>>
        mNavigationalButtonEventTimestamps;
    // NOLINTEND
};

} // namespace OreUI
