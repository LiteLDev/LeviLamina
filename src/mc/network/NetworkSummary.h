#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/TransportLayer.h"

class NetworkSummary {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk872831;
    ::ll::UntypedStorage<8, 64> mUnk4d3354;
    ::ll::UntypedStorage<8, 64> mUnkb709ee;
    ::ll::UntypedStorage<8, 64> mUnk2237e4;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkSummary& operator=(NetworkSummary const&);
    NetworkSummary(NetworkSummary const&);
    NetworkSummary();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::std::optional<::std::string> getNetworkInfoString();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::std::function<::TransportLayer()> getNetworkType,
        ::std::function<bool()>             isInGame,
        ::std::function<bool()>             isSignedIntoSignalingService,
        ::std::function<bool()>             isHostingLocalDedicatedServer
    );
    // NOLINTEND
};
