#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class RakNetRandom {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_RAKNETRANDOM
public:
    RakNetRandom& operator=(RakNetRandom const&) = delete;
    RakNetRandom(RakNetRandom const&)            = delete;
#endif

public:
    /**
     * @symbol ??0RakNetRandom\@RakNet\@\@QEAA\@XZ
     */
    MCAPI RakNetRandom();
    /**
     * @symbol ?SeedMT\@RakNetRandom\@RakNet\@\@QEAAXI\@Z
     */
    MCAPI void SeedMT(unsigned int);
    /**
     * @symbol ??1RakNetRandom\@RakNet\@\@QEAA\@XZ
     */
    MCAPI ~RakNetRandom();
};

}; // namespace RakNet
