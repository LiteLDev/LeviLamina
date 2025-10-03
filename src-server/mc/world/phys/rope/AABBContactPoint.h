#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AABBContactPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkb20d65;
    ::ll::UntypedStorage<4, 4>  mUnk442c9a;
    ::ll::UntypedStorage<4, 12> mUnk43ab57;
    // NOLINTEND

public:
    // prevent constructor by default
    AABBContactPoint& operator=(AABBContactPoint const&);
    AABBContactPoint(AABBContactPoint const&);
    AABBContactPoint();
};
