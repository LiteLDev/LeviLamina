#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NetworkAddress {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> host;
    ::ll::TypedStorage<2, 2, ushort>         port;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    NetworkAddress(NetworkAddress const&);
    NetworkAddress();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCFOLD ::NetworkAddress& operator=(::NetworkAddress const&);

    MCAPI ~NetworkAddress();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCFOLD void $dtor();
#endif
    // NOLINTEND
};
