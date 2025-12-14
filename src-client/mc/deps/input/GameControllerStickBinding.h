#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/enums/DirectionId.h"

struct GameControllerStickBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::DirectionId> directionId;
    bool                                    invertX : 1;
    bool                                    invertY : 1;
    ::ll::TypedStorage<4, 4, int>           stickId;
    // NOLINTEND
};
