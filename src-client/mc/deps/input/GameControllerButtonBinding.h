#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameControllerButtonBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> buttonName;
    ::ll::TypedStorage<4, 4, int>            buttonNum;
    ::ll::TypedStorage<4, 4, float>          repeatInterval;
    ::ll::TypedStorage<1, 1, bool>           exclusive;
    // NOLINTEND
};
