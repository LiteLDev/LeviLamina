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
    // prevent constructor by default
    NetworkAddress(NetworkAddress const&);
    NetworkAddress();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_S ::NetworkAddress& operator=(::NetworkAddress const&);

    MCAPI_S ~NetworkAddress();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_S void $dtor();
    // NOLINTEND
};
