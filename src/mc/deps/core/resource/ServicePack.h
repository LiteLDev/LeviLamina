#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServicePack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkee4d44;
    ::ll::UntypedStorage<8, 32> mUnk88d93b;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ServicePack& operator=(ServicePack const&);
    ServicePack(ServicePack const&);
    ServicePack();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ServicePack& operator=(ServicePack const&);
    ServicePack();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ServicePack(::ServicePack const&);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::ServicePack const&);
#endif
    // NOLINTEND
};
