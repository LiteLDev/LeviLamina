#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ToggleChangeEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk83083d;
    ::ll::UntypedStorage<4, 4> mUnkdf650f;
    ::ll::UntypedStorage<1, 1> mUnka091e8;
    ::ll::UntypedStorage<1, 1> mUnk5b4c16;
    ::ll::UntypedStorage<8, 8> mUnka67c79;
    ::ll::UntypedStorage<8, 8> mUnk258909;
    // NOLINTEND

public:
    // prevent constructor by default
    ToggleChangeEventData& operator=(ToggleChangeEventData const&);
    ToggleChangeEventData(ToggleChangeEventData const&);
    ToggleChangeEventData();
};
