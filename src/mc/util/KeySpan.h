#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct KeySpan {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkdddf2e;
    ::ll::UntypedStorage<4, 4>  mUnk7037cd;
    ::ll::UntypedStorage<4, 4>  mUnk8efc1e;
    // NOLINTEND

public:
    // prevent constructor by default
    KeySpan& operator=(KeySpan const&);
    KeySpan(KeySpan const&);
    KeySpan();
};
