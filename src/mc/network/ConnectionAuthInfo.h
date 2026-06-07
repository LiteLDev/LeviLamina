#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ConnectionAuthInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk1a2e03;
    ::ll::UntypedStorage<4, 4>  mUnk815cba;
    ::ll::UntypedStorage<8, 32> mUnk106756;
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectionAuthInfo& operator=(ConnectionAuthInfo const&);
    ConnectionAuthInfo(ConnectionAuthInfo const&);
    ConnectionAuthInfo();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~ConnectionAuthInfo();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
