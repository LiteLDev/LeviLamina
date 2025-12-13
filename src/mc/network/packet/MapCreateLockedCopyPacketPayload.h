#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MapCreateLockedCopyPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf5e0b4;
    ::ll::UntypedStorage<8, 8> mUnk169489;
    // NOLINTEND

public:
    // prevent constructor by default
    MapCreateLockedCopyPacketPayload& operator=(MapCreateLockedCopyPacketPayload const&);
    MapCreateLockedCopyPacketPayload(MapCreateLockedCopyPacketPayload const&);
    MapCreateLockedCopyPacketPayload();
};
