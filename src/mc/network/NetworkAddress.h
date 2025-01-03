#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NetworkAddress {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> host;
    ::ll::TypedStorage<2, 2, ushort>         port;
    // NOLINTEND

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
