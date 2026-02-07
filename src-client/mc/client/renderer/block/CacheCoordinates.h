#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CacheCoordinates {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>     neighborIndex;
    ::ll::TypedStorage<4, 16, int[4]> lightColorDataIndexArray;
    ::ll::TypedStorage<4, 16, int[4]> cornerDataIndexArray;
    // NOLINTEND
};
