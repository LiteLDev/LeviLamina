#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PointerLocationWithIdEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   id;
    ::ll::TypedStorage<2, 2, short> x;
    ::ll::TypedStorage<2, 2, short> y;
    ::ll::TypedStorage<1, 1, bool>  updateActionPointer;
    // NOLINTEND
};
