#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientCacheBlobStatusPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>> mMissingIds;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>> mFoundIds;
    // NOLINTEND
};
