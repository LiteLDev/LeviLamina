#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class SimpleMutex {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_SIMPLEMUTEX
public:
    SimpleMutex& operator=(SimpleMutex const&) = delete;
    SimpleMutex(SimpleMutex const&)            = delete;
#endif

public:
    /**
     * @symbol ?Lock\@SimpleMutex\@RakNet\@\@QEAAXXZ
     */
    MCAPI void Lock();
    /**
     * @symbol ??0SimpleMutex\@RakNet\@\@QEAA\@XZ
     */
    MCAPI SimpleMutex();
    /**
     * @symbol ?Unlock\@SimpleMutex\@RakNet\@\@QEAAXXZ
     */
    MCAPI void Unlock();
    /**
     * @symbol ??1SimpleMutex\@RakNet\@\@QEAA\@XZ
     */
    MCAPI ~SimpleMutex();
};

}; // namespace RakNet
