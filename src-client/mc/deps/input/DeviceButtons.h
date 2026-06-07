#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/enums/DeviceButtonState.h"

// auto generated forward declare list
// clang-format off
struct DeviceButtonEvent;
// clang-format on

class DeviceButtons {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void feedButton(int buttonId, ::DeviceButtonState buttonState);

    MCAPI static ::DeviceButtonEvent getNextEvent();

    MCAPI static bool next();

    MCAPI static void rewind();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int& _index();

    MCAPI static ::std::vector<::DeviceButtonEvent>& _inputs();
    // NOLINTEND
};
