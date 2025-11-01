#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/CompoundTag.h"
#include "mc/world/level/PositionTrackingId.h"

struct PositionTrackingDBServerBroadcastPacketPayload {
public:
    // PositionTrackingDBServerBroadcastPacketPayload inner types define
    enum class Action : uchar {
        Update = 0,
        Destroy = 1,
        NotFound = 2,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::PositionTrackingDBServerBroadcastPacketPayload::Action> mAction;
    ::ll::TypedStorage<4, 4, ::PositionTrackingId> mId;
    ::ll::TypedStorage<8, 24, ::CompoundTag> mData;
    // NOLINTEND

public:
    // prevent constructor by default
    PositionTrackingDBServerBroadcastPacketPayload& operator=(PositionTrackingDBServerBroadcastPacketPayload const&);
    PositionTrackingDBServerBroadcastPacketPayload(PositionTrackingDBServerBroadcastPacketPayload const&);
    PositionTrackingDBServerBroadcastPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::PositionTrackingDBServerBroadcastPacketPayload& operator=(::PositionTrackingDBServerBroadcastPacketPayload&&);

    MCAPI ~PositionTrackingDBServerBroadcastPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
