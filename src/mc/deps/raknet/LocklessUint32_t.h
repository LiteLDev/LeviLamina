#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class LocklessUint32_t {
public:
    // prevent constructor by default
    LocklessUint32_t& operator=(LocklessUint32_t const&);
    LocklessUint32_t(LocklessUint32_t const&);

public:
    // NOLINTBEGIN
    // symbol: ?Decrement@LocklessUint32_t@RakNet@@QEAAIXZ
    MCAPI uint Decrement();

    // symbol: ?Increment@LocklessUint32_t@RakNet@@QEAAIXZ
    MCAPI uint Increment();

    // symbol: ??0LocklessUint32_t@RakNet@@QEAA@XZ
    MCAPI LocklessUint32_t();

    // NOLINTEND
};

}; // namespace RakNet
