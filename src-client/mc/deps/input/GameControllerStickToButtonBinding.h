#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/enums/DirectionId.h"

struct GameControllerStickToButtonBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::DirectionId>  directionId;
    ::ll::TypedStorage<4, 4, int>            stickId;
    ::ll::TypedStorage<8, 32, ::std::string> buttonName;
    ::ll::TypedStorage<1, 1, bool>           exclusive;
    // NOLINTEND
};
