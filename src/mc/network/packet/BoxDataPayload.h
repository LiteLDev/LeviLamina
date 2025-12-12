#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BoxDataPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkd6a61f;
    // NOLINTEND

public:
    // prevent constructor by default
    BoxDataPayload& operator=(BoxDataPayload const&);
    BoxDataPayload(BoxDataPayload const&);
    BoxDataPayload();
};
