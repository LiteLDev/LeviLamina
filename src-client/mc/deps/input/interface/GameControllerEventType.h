#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class GameControllerEventType : int {
    ButtonEvent                = 0,
    StickEvent                 = 1,
    TriggerEvent               = 2,
    JoinGameEvent              = 3,
    ChangeUserEvent            = 4,
    ConnectionStateChangeEvent = 5,
    TouchPadEvent              = 6,
};
