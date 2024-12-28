#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NetworkReplayReader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9996ee;
    ::ll::UntypedStorage<8, 32> mUnkeb455e;
    ::ll::UntypedStorage<4, 4>  mUnkbf7149;
    ::ll::UntypedStorage<8, 24> mUnk5d71b9;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkReplayReader& operator=(NetworkReplayReader const&);
    NetworkReplayReader(NetworkReplayReader const&);
    NetworkReplayReader();
};
