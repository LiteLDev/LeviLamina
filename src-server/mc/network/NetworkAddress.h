#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NetworkAddress {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> host;
    ::ll::TypedStorage<2, 2, ushort> port;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkAddress(NetworkAddress const&);
    NetworkAddress();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::NetworkAddress& operator=(::NetworkAddress const&);

    MCNAPI ~NetworkAddress();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
