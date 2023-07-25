#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class LocklessUint32_t {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_LOCKLESSUINT32_T
public:
    LocklessUint32_t& operator=(LocklessUint32_t const&) = delete;
    LocklessUint32_t(LocklessUint32_t const&)            = delete;
#endif

public:
    /**
     * @symbol ?Decrement\@LocklessUint32_t\@RakNet\@\@QEAAIXZ
     */
    MCAPI unsigned int Decrement();
    /**
     * @symbol ?Increment\@LocklessUint32_t\@RakNet\@\@QEAAIXZ
     */
    MCAPI unsigned int Increment();
    /**
     * @symbol ??0LocklessUint32_t\@RakNet\@\@QEAA\@XZ
     */
    MCAPI LocklessUint32_t();
};

}; // namespace RakNet
