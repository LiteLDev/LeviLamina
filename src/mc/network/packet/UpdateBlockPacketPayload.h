#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UpdateBlockPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk996a79;
    ::ll::UntypedStorage<4, 4>  mUnke03551;
    ::ll::UntypedStorage<1, 1>  mUnk39b2fd;
    ::ll::UntypedStorage<4, 4>  mUnk7a0612;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateBlockPacketPayload& operator=(UpdateBlockPacketPayload const&);
    UpdateBlockPacketPayload(UpdateBlockPacketPayload const&);
    UpdateBlockPacketPayload();
};
