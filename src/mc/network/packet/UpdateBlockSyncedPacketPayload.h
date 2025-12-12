#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UpdateBlockSyncedPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkf147d3;
    ::ll::UntypedStorage<4, 4>  mUnkfce5db;
    ::ll::UntypedStorage<1, 1>  mUnk210a63;
    ::ll::UntypedStorage<4, 4>  mUnk577c6f;
    ::ll::UntypedStorage<8, 16> mUnk246b7a;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateBlockSyncedPacketPayload& operator=(UpdateBlockSyncedPacketPayload const&);
    UpdateBlockSyncedPacketPayload(UpdateBlockSyncedPacketPayload const&);
    UpdateBlockSyncedPacketPayload();
};
