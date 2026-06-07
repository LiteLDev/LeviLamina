#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Semaphore {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnkaccacd;
    ::ll::UntypedStorage<8, 80> mUnk111c2d;
    ::ll::UntypedStorage<4, 4>  mUnkf2eecf;
    // NOLINTEND

public:
    // prevent constructor by default
    Semaphore& operator=(Semaphore const&);
    Semaphore(Semaphore const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Semaphore();

    MCNAPI void notify();

    MCNAPI void wait();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
