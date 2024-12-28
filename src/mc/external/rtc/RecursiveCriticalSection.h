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
    MCAPI void Enter() const;

    MCAPI void Leave() const;

    MCAPI RecursiveCriticalSection();

    MCAPI ~RecursiveCriticalSection();
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

} // namespace rtc
