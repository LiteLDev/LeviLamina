#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/enums/FocusImpact.h"

struct KeyboardKeyBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> buttonName;
    ::ll::TypedStorage<4, 4, int>            keyNum;
    ::ll::TypedStorage<1, 1, ::FocusImpact>  focusImpact;
    // NOLINTEND
};
