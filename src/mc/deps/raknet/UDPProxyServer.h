#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"
#include "mc/deps/raknet/RakString.h"
#include "mc/deps/raknet/UDPForwarder.h"

// auto generated forward declare list
// clang-format off
namespace DataStructures { class OrderedList; }
namespace RakNet { struct Packet; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
namespace RakNet { struct UDPProxyServerResultHandler; }
// clang-format on

namespace RakNet {

class UDPProxyServer : public ::RakNet::PluginInterface2 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 384, ::RakNet::UDPForwarder> udpForwarder;
    ::ll::TypedStorage<
        8,
        16,
        ::DataStructures::OrderedList<::RakNet::SystemAddress, ::RakNet::SystemAddress, $unknown_type>>
        loggingInCoordinators;
    ::ll::TypedStorage<
        8,
        16,
        ::DataStructures::OrderedList<::RakNet::SystemAddress, ::RakNet::SystemAddress, $unknown_type>>
                                                                     loggedInCoordinators;
    ::ll::TypedStorage<8, 8, ::RakNet::UDPProxyServerResultHandler*> resultHandler;
    ::ll::TypedStorage<2, 2, ushort>                                 socketFamily;
    ::ll::TypedStorage<8, 8, ::RakNet::RakString>                    serverPublicIp;
    // NOLINTEND

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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
