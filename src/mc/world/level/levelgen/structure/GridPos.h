#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GridPos {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk693c88;
    ::ll::UntypedStorage<4, 4> mUnk7b9656;
    // NOLINTEND

public:
    // prevent constructor by default
    GridPos& operator=(GridPos const&);
    GridPos(GridPos const&);
    GridPos();
};
