#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NetworkStackLatencyPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mCreateTime;
    ::ll::TypedStorage<1, 1, bool> mFromServer;
    // NOLINTEND

};
