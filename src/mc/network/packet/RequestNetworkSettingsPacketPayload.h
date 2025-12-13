#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RequestNetworkSettingsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke8c79e;
    // NOLINTEND

public:
    // prevent constructor by default
    RequestNetworkSettingsPacketPayload& operator=(RequestNetworkSettingsPacketPayload const&);
    RequestNetworkSettingsPacketPayload(RequestNetworkSettingsPacketPayload const&);
    RequestNetworkSettingsPacketPayload();
};
