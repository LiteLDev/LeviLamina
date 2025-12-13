#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NetworkStackLatencyPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka88bab;
    ::ll::UntypedStorage<1, 1> mUnkeb579b;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkStackLatencyPacketPayload& operator=(NetworkStackLatencyPacketPayload const&);
    NetworkStackLatencyPacketPayload(NetworkStackLatencyPacketPayload const&);
    NetworkStackLatencyPacketPayload();
};
