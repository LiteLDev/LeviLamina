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
    virtual ~UDPProxyServer() /*override*/ = default;

    virtual void OnAttach() /*override*/;

    virtual void OnDetach() /*override*/;

    virtual void Update() /*override*/;

    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

    virtual void OnClosedConnection(
        ::RakNet::SystemAddress const&,
        ::RakNet::RakNetGUID,
        ::RakNet::PI2_LostConnectionReason
    ) /*override*/;

    virtual void OnRakPeerStartup() /*override*/;

    virtual void OnRakPeerShutdown() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
