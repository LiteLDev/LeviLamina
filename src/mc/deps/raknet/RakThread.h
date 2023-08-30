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
    MCAPI static int32_t Create(uint32_t(__cdecl*)(void*), void*, int32_t);
    // NOLINTEND
};

}; // namespace RakNet
