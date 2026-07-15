#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerToClientHandshakePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mData;
    // NOLINTEND
};
