#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Seed128Bit {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkbdc215;
    ::ll::UntypedStorage<8, 8> mUnk6afd62;
    // NOLINTEND

public:
    // prevent constructor by default
    Seed128Bit& operator=(Seed128Bit const&);
    Seed128Bit(Seed128Bit const&);
    Seed128Bit();

};
