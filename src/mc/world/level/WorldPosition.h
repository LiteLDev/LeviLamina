#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WorldPosition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk4d9121;
    ::ll::UntypedStorage<4, 4>  mUnkd4ba9a;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldPosition& operator=(WorldPosition const&);
    WorldPosition(WorldPosition const&);
    WorldPosition();
};
