#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TextBoxSelection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  start;
    ::ll::TypedStorage<4, 4, int>  end;
    ::ll::TypedStorage<1, 1, bool> isForward;
    // NOLINTEND
};
