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
    MCAPI Mutex();

    MCAPI void lock();

    MCAPI void unlock();

    MCAPI ~Mutex();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace bx
