#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/connection/DisconnectFailReason.h"

struct DisconnectionScreenParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk9b233b;
    ::ll::UntypedStorage<4, 4>  mUnk14d4ea;
    ::ll::UntypedStorage<8, 32> mUnk214c4a;
    ::ll::UntypedStorage<8, 32> mUnkce2469;
    ::ll::UntypedStorage<8, 32> mUnkc7b50b;
    ::ll::UntypedStorage<8, 32> mUnk571c86;
    ::ll::UntypedStorage<8, 32> mUnk93de36;
    ::ll::UntypedStorage<8, 32> mUnke5cfd8;
    ::ll::UntypedStorage<8, 16> mUnkce69d6;
    // NOLINTEND

public:
    // prevent constructor by default
    DisconnectionScreenParams& operator=(DisconnectionScreenParams const&);
    DisconnectionScreenParams(DisconnectionScreenParams const&);
    DisconnectionScreenParams();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit DisconnectionScreenParams(::Connection::DisconnectFailReason disconnectFailReason);

    MCNAPI ~DisconnectionScreenParams();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Connection::DisconnectFailReason disconnectFailReason);
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
