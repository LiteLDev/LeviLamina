#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClipStateChangeEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk75b1ac;
    ::ll::UntypedStorage<8, 8> mUnkd8e854;
    ::ll::UntypedStorage<1, 1> mUnk7ca3c6;
    // NOLINTEND

public:
    // prevent constructor by default
    ClipStateChangeEventData& operator=(ClipStateChangeEventData const&);
    ClipStateChangeEventData(ClipStateChangeEventData const&);
    ClipStateChangeEventData();
};
