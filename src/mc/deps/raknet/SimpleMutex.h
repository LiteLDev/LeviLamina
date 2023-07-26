#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class SimpleMutex {

public:
    // prevent constructor by default
    SimpleMutex& operator=(SimpleMutex const&) = delete;
    SimpleMutex(SimpleMutex const&)            = delete;

public:
    /**
     * @symbol ?Lock\@SimpleMutex\@RakNet\@\@QEAAXXZ
     */
    MCAPI void Lock(); // NOLINT
    /**
     * @symbol ??0SimpleMutex\@RakNet\@\@QEAA\@XZ
     */
    MCAPI SimpleMutex(); // NOLINT
    /**
     * @symbol ?Unlock\@SimpleMutex\@RakNet\@\@QEAAXXZ
     */
    MCAPI void Unlock(); // NOLINT
    /**
     * @symbol ??1SimpleMutex\@RakNet\@\@QEAA\@XZ
     */
    MCAPI ~SimpleMutex(); // NOLINT
};

}; // namespace RakNet
