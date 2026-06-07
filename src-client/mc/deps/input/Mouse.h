#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MouseAction;
class MouseDevice;
// clang-format on

class Mouse {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void feed(char actionButtonId, schar buttonData, short x, short y);

    MCAPI static void feed(char actionButtonId, schar buttonData, short x, short y, short dx, short dy);

    MCAPI static void feedRelative(char actionButtonId, schar buttonData, short dx, short dy);

    MCAPI static ::MouseAction const& getEvent();

    MCAPI static short getX();

    MCAPI static short getY();

    MCAPI static bool isButtonDown(int buttonId);

    MCAPI static bool next();

    MCAPI static void rewind();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::MouseDevice& _instance();
    // NOLINTEND
};
