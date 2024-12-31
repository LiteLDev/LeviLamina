#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class UDPProxyServer : public ::RakNet::PluginInterface2 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 384> mUnk85e882;
    ::ll::UntypedStorage<8, 16>  mUnk973cd6;
    ::ll::UntypedStorage<8, 16>  mUnk30a013;
    ::ll::UntypedStorage<8, 8>   mUnkd4ed56;
    ::ll::UntypedStorage<2, 2>   mUnk518285;
    ::ll::UntypedStorage<8, 8>   mUnkf54107;
    // NOLINTEND

public:
    // prevent constructor by default
    UDPProxyServer& operator=(UDPProxyServer const&);
    UDPProxyServer(UDPProxyServer const&);
    UDPProxyServer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UDPProxyServer() /*override*/ = default;

    // vIndex: 1
    virtual void OnAttach() /*override*/;

    // vIndex: 2
    virtual void OnDetach() /*override*/;

    // vIndex: 3
    virtual void Update() /*override*/;

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

    // vIndex: 7
    virtual void OnClosedConnection(
        ::RakNet::SystemAddress const&,
        ::RakNet::RakNetGUID,
        ::RakNet::PI2_LostConnectionReason
    ) /*override*/;

    // vIndex: 5
    virtual void OnRakPeerStartup() /*override*/;

    // vIndex: 6
    virtual void OnRakPeerShutdown() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
