#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NetworkAddress {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk58d039;
    ::ll::UntypedStorage<2, 2>  mUnkd32ef9;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkAddress(NetworkAddress const&);
    NetworkAddress();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::NetworkAddress& operator=(::NetworkAddress const&);

    MCAPI ~NetworkAddress();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
