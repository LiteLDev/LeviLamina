#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RawInputScreenEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk3c37d8;
    ::ll::UntypedStorage<1, 1> mUnk6bcd3e;
    ::ll::UntypedStorage<1, 1> mUnk849f5f;
    ::ll::UntypedStorage<1, 1> mUnk16f95d;
    // NOLINTEND

public:
    // prevent constructor by default
    RawInputScreenEventData& operator=(RawInputScreenEventData const&);
    RawInputScreenEventData(RawInputScreenEventData const&);
    RawInputScreenEventData();
};
