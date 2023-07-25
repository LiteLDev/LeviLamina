#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class RakThread {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_RAKTHREAD
public:
    RakThread& operator=(RakThread const&) = delete;
    RakThread(RakThread const&)            = delete;
    RakThread()                            = delete;
#endif

public:
    /**
     * @symbol ?Create\@RakThread\@RakNet\@\@SAHP6AIPEAX\@Z0H\@Z
     */
    MCAPI static int Create(unsigned int (*)(void*), void*, int);
};

}; // namespace RakNet
