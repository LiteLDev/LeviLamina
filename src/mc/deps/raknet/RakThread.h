#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class RakThread {

public:
    // prevent constructor by default
    RakThread& operator=(RakThread const&) = delete;
    RakThread(RakThread const&)            = delete;
    RakThread()                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?Create\@RakThread\@RakNet\@\@SAHP6AIPEAX\@Z0H\@Z
     */
    MCAPI static int Create(unsigned int (*)(void*), void*, int);
    // NOLINTEND
};

}; // namespace RakNet
