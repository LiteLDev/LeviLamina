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
    MCAPI Semaphore();

    MCAPI void post(uint _count);

    MCAPI bool wait(int _msecs);

    MCAPI ~Semaphore();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace bx
