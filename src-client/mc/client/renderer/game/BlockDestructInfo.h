#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockDestructInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> destructRate;
    ::ll::TypedStorage<4, 4, float> destructProgress;
    // NOLINTEND
};
