#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ValueSlot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkd65faf;
    ::ll::UntypedStorage<8, 8>  mUnk81a0f5;
    ::ll::UntypedStorage<8, 8>  mUnk7bd29e;
    // NOLINTEND

public:
    // prevent constructor by default
    ValueSlot& operator=(ValueSlot const&);
    ValueSlot(ValueSlot const&);
    ValueSlot();
};
