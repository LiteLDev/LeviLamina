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

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_S void $dtor();
    // NOLINTEND
};
