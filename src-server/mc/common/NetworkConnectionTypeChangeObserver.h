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
    ::ll::UntypedStorage<1, 1> mUnk15f8d3;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkConnectionTypeChangeObserver& operator=(NetworkConnectionTypeChangeObserver const&);
    NetworkConnectionTypeChangeObserver(NetworkConnectionTypeChangeObserver const&);
    NetworkConnectionTypeChangeObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void onNetworkConfigurationChanged() /*override*/;

    // vIndex: 0
    virtual ~NetworkConnectionTypeChangeObserver() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
