#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientCacheStatusPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk7da6c8;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientCacheStatusPacketPayload& operator=(ClientCacheStatusPacketPayload const&);
    ClientCacheStatusPacketPayload(ClientCacheStatusPacketPayload const&);
    ClientCacheStatusPacketPayload();
};
