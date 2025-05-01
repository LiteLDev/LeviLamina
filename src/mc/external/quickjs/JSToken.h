#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkd302b9;
    ::ll::UntypedStorage<4, 4>  mUnka2a2d5;
    ::ll::UntypedStorage<8, 8>  mUnke4e888;
    ::ll::UntypedStorage<8, 32> mUnkf0fbd0;
    // NOLINTEND

public:
    // prevent constructor by default
    JSToken& operator=(JSToken const&);
    JSToken(JSToken const&);
    JSToken();
};
