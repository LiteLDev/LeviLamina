#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ConnectionRequest;
// clang-format on

struct LoginPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                    mClientNetworkVersion;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ConnectionRequest>> mConnectionRequest;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    LoginPacketPayload();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI LoginPacketPayload(int clientVersion, ::ConnectionRequest const& connectionRequest);
#endif

    MCAPI ~LoginPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(int clientVersion, ::ConnectionRequest const& connectionRequest);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
