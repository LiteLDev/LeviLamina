#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WorldBlockPosition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk8ec469;
    ::ll::UntypedStorage<4, 4>  mUnk280fbb;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldBlockPosition& operator=(WorldBlockPosition const&);
    WorldBlockPosition(WorldBlockPosition const&);
    WorldBlockPosition();
};
