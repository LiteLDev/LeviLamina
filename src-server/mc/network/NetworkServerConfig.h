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
    ::ll::UntypedStorage<4, 4>  mUnk34796a;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkServerConfig& operator=(NetworkServerConfig const&);
    NetworkServerConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetworkServerConfig(::NetworkServerConfig const&);

    MCAPI ~NetworkServerConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::NetworkServerConfig const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
