#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

class NetworkChangeObserver : public ::Core::Observer<::NetworkChangeObserver, ::std::mutex> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkChangeObserver() /*override*/ = default;

    virtual void onNetworkConfigurationChanged() = 0;
    // NOLINTEND
};
