#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/PositionTrackingId.h"

struct PositionTrackingDBClientRequestPacketPayload {
public:
    // PositionTrackingDBClientRequestPacketPayload inner types define
    enum class Action : uchar {
        Query = 0,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::PositionTrackingDBClientRequestPacketPayload::Action> mAction;
    ::ll::TypedStorage<4, 4, ::PositionTrackingId> mId;
    // NOLINTEND

};
