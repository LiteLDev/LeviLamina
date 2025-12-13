#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DataStoreSyncPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb17b60;
    // NOLINTEND

public:
    // prevent constructor by default
    DataStoreSyncPacketPayload& operator=(DataStoreSyncPacketPayload const&);
    DataStoreSyncPacketPayload(DataStoreSyncPacketPayload const&);
    DataStoreSyncPacketPayload();
};
