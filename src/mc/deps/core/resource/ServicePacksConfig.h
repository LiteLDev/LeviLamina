#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServicePacksConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke9f9d8;
    // NOLINTEND

public:
    // prevent constructor by default
    ServicePacksConfig& operator=(ServicePacksConfig const&);
    ServicePacksConfig(ServicePacksConfig const&);
    ServicePacksConfig();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~ServicePacksConfig();
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
