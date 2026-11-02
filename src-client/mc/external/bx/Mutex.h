#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

class Mutex {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 64, uchar[64]> m_internal;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Mutex();

    MCNAPI void lock();

    MCNAPI void unlock();

    MCNAPI ~Mutex();
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
