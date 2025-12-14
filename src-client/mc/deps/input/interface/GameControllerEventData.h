#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/AddClientData.h"
#include "mc/deps/input/ChangeUserData.h"
#include "mc/deps/input/ConnectionStateData.h"
#include "mc/deps/input/TouchPadTouchEventData.h"
#include "mc/deps/input/interface/GameControllerButtonEvent.h"
#include "mc/deps/input/interface/GameControllerStickEvent.h"
#include "mc/deps/input/interface/GameControllerTriggerEvent.h"

union GameControllerEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 44, ::GameControllerButtonEvent>  buttonEvent;
    ::ll::TypedStorage<4, 44, ::GameControllerStickEvent>   stickEvent;
    ::ll::TypedStorage<4, 44, ::GameControllerTriggerEvent> triggerEvent;
    ::ll::TypedStorage<1, 44, ::ConnectionStateData>        connectionEvent;
    ::ll::TypedStorage<1, 44, ::AddClientData>              joinEvent;
    ::ll::TypedStorage<1, 44, ::ChangeUserData>             changeUserEvent;
    ::ll::TypedStorage<4, 44, ::TouchPadTouchEventData>     touchPadEvent;
    // NOLINTEND
};