#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MouseButtonBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> buttonName;
    ::ll::TypedStorage<4, 4, int>            buttonNum;
    // NOLINTEND
};
