#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class RakString; }
namespace RakNet { struct NetworkAdapter; }
// clang-format on

namespace RakNet {

class SocketLayer {
public:
    // prevent constructor by default
    SocketLayer& operator=(SocketLayer const&);
    SocketLayer(SocketLayer const&);
    SocketLayer();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void GetMyAdapters(::RakNet::NetworkAdapter* const adapters);

    MCAPI static ::RakNet::RakString GetSubNetForSocketAndIp(::RakNet::RakString inIpString);

    MCAPI static void SetSocketOptions(uint64 listenSocket, bool blockingSocket, bool setBroadcast);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::function<::std::vector<::std::string>()>& mPlatformAdapterOverride();
    // NOLINTEND
};

} // namespace RakNet
