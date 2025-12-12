#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServicePacksConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk833714;
    // NOLINTEND

public:
    // prevent constructor by default
    ServicePacksConfig& operator=(ServicePacksConfig const&);
    ServicePacksConfig(ServicePacksConfig const&);
    ServicePacksConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~ServicePacksConfig();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
