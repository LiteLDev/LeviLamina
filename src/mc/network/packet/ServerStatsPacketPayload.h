#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerStatsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mServerTime;
    ::ll::TypedStorage<4, 4, float> mNetworkTime;
    // NOLINTEND
};
