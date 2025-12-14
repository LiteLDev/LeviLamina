#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/interface/GameControllerEventData.h"
#include "mc/deps/input/interface/GameControllerEventType.h"

struct GameControllerEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::GameControllerEventType>  type;
    ::ll::TypedStorage<4, 44, ::GameControllerEventData> data;
    ::ll::TypedStorage<4, 4, int>                        controllerId;
    // NOLINTEND
};
