#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPlacementDirectionalFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> directionMask;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void fromStringVector(::BlockPlacementDirectionalFilter& instance, ::std::vector<::std::string> faces);
    // NOLINTEND

};
