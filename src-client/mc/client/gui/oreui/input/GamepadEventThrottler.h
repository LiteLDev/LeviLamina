#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/input/GamepadButton.h"
#include "mc/client/gui/oreui/input/GamepadMode.h"
#include "mc/client/gui/oreui/input/GamepadPressType.h"

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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::OreUI::GamepadPressType shouldTrigger(
        ::OreUI::GamepadButton                         button,
        bool                                           isButtonPressed,
        ::std::chrono::steady_clock::time_point const& timestamp,
        bool                                           isMovingDiagonally,
        ::OreUI::GamepadMode                           gamepadMode
    );
    // NOLINTEND
};

} // namespace OreUI
