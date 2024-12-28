#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class RakThread {
public:
    // prevent constructor by default
    RakThread& operator=(RakThread const&);
    RakThread(RakThread const&);
    RakThread();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static int Create(uint (*start_address)(void*), void* arglist, int priority);
    // NOLINTEND
};

} // namespace RakNet
