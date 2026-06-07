#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class SimpleMutex {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkfaa54f;
    // NOLINTEND

public:
    // prevent constructor by default
    SimpleMutex& operator=(SimpleMutex const&);
    SimpleMutex(SimpleMutex const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Lock();

    MCAPI SimpleMutex();

    MCAPI void Unlock();

    MCAPI ~SimpleMutex();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace RakNet
