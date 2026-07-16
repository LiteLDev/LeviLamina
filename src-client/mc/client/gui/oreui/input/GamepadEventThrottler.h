#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class GamepadEventThrottler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 144, ::std::array<int, 36>> mButtonEventCounters;
    ::ll::TypedStorage<8, 576, ::std::array<::std::optional<::std::chrono::steady_clock::time_point>, 36>>
        mButtonLongPressTimestamps;
    ::ll::TypedStorage<8, 64, ::std::array<::std::chrono::steady_clock::time_point, 8>>
        mNavigationalButtonEventTimestamps;
    // NOLINTEND
};

} // namespace OreUI
