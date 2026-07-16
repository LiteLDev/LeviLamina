#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogLevel.h"

struct ContentLogMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> message;
    ::ll::TypedStorage<4, 4, ::LogLevel>     level;
    // NOLINTEND
};
