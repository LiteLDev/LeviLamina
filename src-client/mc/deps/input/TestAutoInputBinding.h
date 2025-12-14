#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TestAutoInputBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> buttonName;
    ::ll::TypedStorage<4, 4, int>            actionValue;
    // NOLINTEND
};
