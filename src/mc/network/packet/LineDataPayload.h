#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LineDataPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk30ea0e;
    // NOLINTEND

public:
    // prevent constructor by default
    LineDataPayload& operator=(LineDataPayload const&);
    LineDataPayload(LineDataPayload const&);
    LineDataPayload();
};
