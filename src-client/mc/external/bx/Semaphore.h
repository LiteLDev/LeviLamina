#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

class Semaphore {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 128, uchar[128]> m_internal;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Semaphore();

    MCNAPI void post(uint _count);

    MCNAPI bool wait(int _msecs);

    MCNAPI ~Semaphore();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace bx
