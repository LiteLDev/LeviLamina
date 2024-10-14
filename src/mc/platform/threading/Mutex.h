#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class Mutex {
public:
    // prevent constructor by default
    Mutex& operator=(Mutex const&);
    Mutex(Mutex const&);
    Mutex();

public:
    // NOLINTBEGIN
    MCAPI ~Mutex();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Bedrock::Threading
