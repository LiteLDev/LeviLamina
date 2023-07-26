#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class RakNetRandom {

public:
    // prevent constructor by default
    RakNetRandom& operator=(RakNetRandom const&) = delete;
    RakNetRandom(RakNetRandom const&)            = delete;

public:
    /**
     * @symbol ??0RakNetRandom\@RakNet\@\@QEAA\@XZ
     */
    MCAPI RakNetRandom(); // NOLINT
    /**
     * @symbol ?SeedMT\@RakNetRandom\@RakNet\@\@QEAAXI\@Z
     */
    MCAPI void SeedMT(unsigned int); // NOLINT
    /**
     * @symbol ??1RakNetRandom\@RakNet\@\@QEAA\@XZ
     */
    MCAPI ~RakNetRandom(); // NOLINT
};

}; // namespace RakNet
