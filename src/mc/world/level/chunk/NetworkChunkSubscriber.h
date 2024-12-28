#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NetworkChunkSubscriber {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkb99700;
    ::ll::UntypedStorage<4, 4>  mUnk943b85;
    ::ll::UntypedStorage<4, 4>  mUnk986de8;
    ::ll::UntypedStorage<8, 8>  mUnkb39f4a;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkChunkSubscriber& operator=(NetworkChunkSubscriber const&);
    NetworkChunkSubscriber(NetworkChunkSubscriber const&);
    NetworkChunkSubscriber();
};
