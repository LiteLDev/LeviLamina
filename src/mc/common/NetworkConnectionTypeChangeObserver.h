#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/NetworkChangeObserver.h"

class NetworkConnectionTypeChangeObserver : public ::NetworkChangeObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk1bd10a;
    ::ll::UntypedStorage<8, 64> mUnkec95fa;
    ::ll::UntypedStorage<1, 1>  mUnk15f8d3;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkConnectionTypeChangeObserver& operator=(NetworkConnectionTypeChangeObserver const&);
    NetworkConnectionTypeChangeObserver(NetworkConnectionTypeChangeObserver const&);
    NetworkConnectionTypeChangeObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onNetworkConfigurationChanged() /*override*/;

#ifdef LL_PLAT_S
    virtual ~NetworkConnectionTypeChangeObserver() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~NetworkConnectionTypeChangeObserver() /*override*/;
#endif

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $onNetworkConfigurationChanged();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
