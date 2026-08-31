#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DisconnectPacketMessages {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mMessage;
    ::ll::TypedStorage<8, 32, ::std::string> mFilteredMessage;
    // NOLINTEND
};
