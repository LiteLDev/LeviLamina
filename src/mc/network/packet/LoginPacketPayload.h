#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ConnectionRequest;
// clang-format on

struct LoginPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                    mClientNetworkVersion;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ConnectionRequest>> mConnectionRequest;
    // NOLINTEND
};
