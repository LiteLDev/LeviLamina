#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class RecursiveCriticalSection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkb81516;
    // NOLINTEND

public:
    // prevent constructor by default
    RecursiveCriticalSection& operator=(RecursiveCriticalSection const&);
    RecursiveCriticalSection(RecursiveCriticalSection const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Enter() const;

    MCNAPI void Leave() const;

    MCNAPI RecursiveCriticalSection();

    MCNAPI ~RecursiveCriticalSection();
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

}
