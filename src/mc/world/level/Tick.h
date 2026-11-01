#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Tick {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> tickID;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Tick const& MAX();
    // NOLINTEND
};
