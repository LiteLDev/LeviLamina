#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RequestNetworkSettingsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mClientNetworkVersion;
    // NOLINTEND
};
