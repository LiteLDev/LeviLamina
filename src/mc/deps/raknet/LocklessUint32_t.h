#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class LocklessUint32_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka0282a;
    // NOLINTEND

public:
    // prevent constructor by default
    LocklessUint32_t& operator=(LocklessUint32_t const&);
    LocklessUint32_t(LocklessUint32_t const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI uint Decrement();

    MCAPI uint Increment();

    MCAPI LocklessUint32_t();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace RakNet
