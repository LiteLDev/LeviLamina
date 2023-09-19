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
    // NOLINTBEGIN
    // symbol: ?Create@RakThread@RakNet@@SAHP6AIPEAX@Z0H@Z
    MCAPI static int Create(uint (*)(void*), void*, int);

    // NOLINTEND
};

}; // namespace RakNet
