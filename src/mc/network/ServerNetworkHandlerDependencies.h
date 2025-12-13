#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerNetworkHandlerDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkf3d96f;
    ::ll::UntypedStorage<8, 64> mUnkfd17ee;
    ::ll::UntypedStorage<8, 64> mUnkd1ecc1;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerNetworkHandlerDependencies& operator=(ServerNetworkHandlerDependencies const&);
    ServerNetworkHandlerDependencies(ServerNetworkHandlerDependencies const&);
    ServerNetworkHandlerDependencies();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerNetworkHandlerDependencies(::ServerNetworkHandlerDependencies&&);

    MCNAPI ~ServerNetworkHandlerDependencies();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerNetworkHandlerDependencies&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
