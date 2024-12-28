#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RopePoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkdc431f;
    ::ll::UntypedStorage<4, 12> mUnk4c7785;
    // NOLINTEND

public:
    // prevent constructor by default
    RopePoint& operator=(RopePoint const&);
    RopePoint(RopePoint const&);
    RopePoint();
};
