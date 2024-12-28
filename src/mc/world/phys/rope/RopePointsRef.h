#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RopePointsRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk93c480;
    ::ll::UntypedStorage<8, 8> mUnk60ca4c;
    // NOLINTEND

public:
    // prevent constructor by default
    RopePointsRef& operator=(RopePointsRef const&);
    RopePointsRef(RopePointsRef const&);
    RopePointsRef();
};
