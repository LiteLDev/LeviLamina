#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Tick {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> tickID;
    // NOLINTEND

public:
    // prevent constructor by default
    Tick& operator=(Tick const&);
    Tick(Tick const&);
    Tick();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Tick const& MAX();
    // NOLINTEND
};
