#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StrAndBool {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, char*> str;
    ::ll::TypedStorage<1, 1, bool>  b;
    // NOLINTEND
};
