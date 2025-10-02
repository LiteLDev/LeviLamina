#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
namespace RakNet { struct UDPProxyClientResultHandler; }
// clang-format on

namespace RakNet {

class UDPProxyClient : public ::RakNet::PluginInterface2 {
public:
    // UDPProxyClient inner types declare
    // clang-format off
    struct PingServerGroup;
    struct SenderAndTargetAddress;
    struct ServerWithPing;
    // clang-format on

    // UDPProxyClient inner types define
    struct ServerWithPing {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ushort>                    ping;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> serverAddress;
        // NOLINTEND
    };

    struct SenderAndTargetAddress {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> senderClientAddress;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> targetClientAddress;
        // NOLINTEND
    };

    struct PingServerGroup {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 272, ::RakNet::UDPProxyClient::SenderAndTargetAddress> sata;
        ::ll::TypedStorage<4, 4, uint>                                               startPingTime;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>                          coordinatorAddressForPings;
        ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::UDPProxyClient::ServerWithPing>> serversToPing;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::UDPProxyClient::PingServerGroup*>> pingServerGroups;
    ::ll::TypedStorage<8, 8, ::RakNet::UDPProxyClientResultHandler*>                              resultHandler;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UDPProxyClient() /*override*/ = default;

    // vIndex: 3
    virtual void Update() /*override*/;

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

    // vIndex: 6
    virtual void OnRakPeerShutdown() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
