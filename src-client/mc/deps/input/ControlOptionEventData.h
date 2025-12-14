#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ControlOptionEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> id;
    ::ll::TypedStorage<1, 1, bool> active;
    ::ll::TypedStorage<1, 1, bool> otherConfigsExistInThisCategory;
    ::ll::TypedStorage<4, 4, int>  numberOfActiveConfigs;
    // NOLINTEND
};
