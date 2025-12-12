#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InterpolationPair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd23e2c;
    ::ll::UntypedStorage<4, 4> mUnk41f2e3;
    // NOLINTEND

public:
    // prevent constructor by default
    InterpolationPair& operator=(InterpolationPair const&);
    InterpolationPair(InterpolationPair const&);
    InterpolationPair();
};
