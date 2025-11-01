#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TextEditSelectedStateChangeEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> id;
    ::ll::TypedStorage<4, 4, int> index;
    ::ll::TypedStorage<1, 1, bool> selected;
    // NOLINTEND

};
