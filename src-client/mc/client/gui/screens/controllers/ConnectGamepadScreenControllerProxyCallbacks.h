#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/interface/GameControllerErrorType.h"

struct ConnectGamepadScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::GameControllerErrorType()>> mHandleGetControllerError;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                      mCloseModalDialog;
    // NOLINTEND
};
