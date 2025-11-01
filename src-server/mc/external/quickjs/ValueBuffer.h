#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ValueBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke0da96;
    ::ll::UntypedStorage<8, 8> mUnk6ced86;
    ::ll::UntypedStorage<8, 64> mUnke37136;
    ::ll::UntypedStorage<4, 4> mUnkd0d2cf;
    ::ll::UntypedStorage<4, 4> mUnkc70e5d;
    ::ll::UntypedStorage<4, 4> mUnkb46a68;
    // NOLINTEND

public:
    // prevent constructor by default
    ValueBuffer& operator=(ValueBuffer const&);
    ValueBuffer(ValueBuffer const&);
    ValueBuffer();

};
