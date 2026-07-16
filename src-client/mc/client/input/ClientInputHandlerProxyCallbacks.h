#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientInputHandlerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::std::string()>> mGetCurrentInputMapping;
    // NOLINTEND
};
