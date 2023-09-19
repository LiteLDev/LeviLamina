#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class SimpleMutex {
public:
    // prevent constructor by default
    SimpleMutex& operator=(SimpleMutex const&);
    SimpleMutex(SimpleMutex const&);

public:
    // NOLINTBEGIN
    // symbol: ?Lock@SimpleMutex@RakNet@@QEAAXXZ
    MCAPI void Lock();

    // symbol: ??0SimpleMutex@RakNet@@QEAA@XZ
    MCAPI SimpleMutex();

    // symbol: ?Unlock@SimpleMutex@RakNet@@QEAAXXZ
    MCAPI void Unlock();

    // symbol: ??1SimpleMutex@RakNet@@QEAA@XZ
    MCAPI ~SimpleMutex();

    // NOLINTEND
};

}; // namespace RakNet
