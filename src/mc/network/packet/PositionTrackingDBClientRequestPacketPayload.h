#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PositionTrackingDBClientRequestPacketPayload {
public:
    // PositionTrackingDBClientRequestPacketPayload inner types define
    enum class Action : uchar {
        Query = 0,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk9bc122;
    ::ll::UntypedStorage<4, 4> mUnkf3d42f;
    // NOLINTEND

public:
    // prevent constructor by default
    PositionTrackingDBClientRequestPacketPayload& operator=(PositionTrackingDBClientRequestPacketPayload const&);
    PositionTrackingDBClientRequestPacketPayload(PositionTrackingDBClientRequestPacketPayload const&);
    PositionTrackingDBClientRequestPacketPayload();
};
