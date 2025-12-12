#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PositionTrackingDBServerBroadcastPacketPayload {
public:
    // PositionTrackingDBServerBroadcastPacketPayload inner types define
    enum class Action : uchar {
        Update   = 0,
        Destroy  = 1,
        NotFound = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk4e4306;
    ::ll::UntypedStorage<4, 4>  mUnk4b1a04;
    ::ll::UntypedStorage<8, 24> mUnk226d7d;
    // NOLINTEND

public:
    // prevent constructor by default
    PositionTrackingDBServerBroadcastPacketPayload& operator=(PositionTrackingDBServerBroadcastPacketPayload const&);
    PositionTrackingDBServerBroadcastPacketPayload(PositionTrackingDBServerBroadcastPacketPayload const&);
    PositionTrackingDBServerBroadcastPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::PositionTrackingDBServerBroadcastPacketPayload&
    operator=(::PositionTrackingDBServerBroadcastPacketPayload&&);

    MCNAPI ~PositionTrackingDBServerBroadcastPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
