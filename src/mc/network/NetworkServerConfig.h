#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NetworkServerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5a2500;
    ::ll::UntypedStorage<1, 1>  mUnkc58783;
    ::ll::UntypedStorage<8, 24> mUnk2bc0af;
    ::ll::UntypedStorage<1, 1>  mUnk958413;
    ::ll::UntypedStorage<1, 1>  mUnke87fce;
    ::ll::UntypedStorage<1, 1>  mUnk708d57;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkServerConfig& operator=(NetworkServerConfig const&);
    NetworkServerConfig(NetworkServerConfig const&);
    NetworkServerConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~NetworkServerConfig();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
