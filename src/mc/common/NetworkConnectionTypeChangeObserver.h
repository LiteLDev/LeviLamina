#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/NetworkChangeObserver.h"
#include "mc/deps/core/NetworkConnectionType.h"

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

    virtual ~NetworkConnectionTypeChangeObserver() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::std::function<::NetworkConnectionType()>  getNetworkConnectionType,
        ::std::function<void(::std::string const&)> fireNetworkChangedEvent
    );
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
