#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubChunkInterlocker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3a1355;
    ::ll::UntypedStorage<8, 24> mUnk209163;
    // NOLINTEND

public:
    // prevent constructor by default
    SubChunkInterlocker& operator=(SubChunkInterlocker const&);
    SubChunkInterlocker(SubChunkInterlocker const&);
    SubChunkInterlocker();
};
