#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/input/WebApiButton.h"

namespace OreUI {

class GamepadEventThrottler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 128, ::std::array<int, 32>>                                   mButtonEventCounters;
    ::ll::TypedStorage<8, 32, ::std::array<::std::chrono::steady_clock::time_point, 4>> mButtonEventTimestamps;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::array<::OreUI::WebApiButton, 4> const& TIMESTAMPED_BUTTONS();
    // NOLINTEND
};

} // namespace OreUI
