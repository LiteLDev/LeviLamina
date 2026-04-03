#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NetworkReplayReader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk37db59;
    ::ll::UntypedStorage<8, 32> mUnk68530d;
    ::ll::UntypedStorage<4, 4>  mUnkbf7149;
    ::ll::UntypedStorage<8, 24> mUnk6521e2;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkReplayReader& operator=(NetworkReplayReader const&);
    NetworkReplayReader(NetworkReplayReader const&);
    NetworkReplayReader();
};
