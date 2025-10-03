#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/BitStream.h"
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/RakString.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/raknet/data_structures/List.h"
#include "mc/deps/raknet/data_structures/Queue.h"

// auto generated forward declare list
// clang-format off
namespace DataStructures { class OrderedList; }
namespace RakNet { struct Packet; }
// clang-format on

namespace RakNet {

class UDPProxyCoordinator : public ::RakNet::PluginInterface2 {
public:
    // UDPProxyCoordinator inner types declare
    // clang-format off
    struct ForwardingRequest;
    struct SenderAndTargetAddress;
    struct ServerWithPing;
    // clang-format on

    // UDPProxyCoordinator inner types define
    struct SenderAndTargetAddress {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> senderClientAddress;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     senderClientGuid;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> targetClientAddress;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     targetClientGuid;
        // NOLINTEND
    };

    struct ServerWithPing {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ushort>                    ping;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> serverAddress;
        // NOLINTEND
    };

    struct ForwardingRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                                                    timeoutOnNoDataMS;
        ::ll::TypedStorage<4, 4, uint>                                                    timeoutAfterSuccess;
        ::ll::TypedStorage<8, 304, ::RakNet::UDPProxyCoordinator::SenderAndTargetAddress> sata;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>                               requestingAddress;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>                         currentlyAttemptedServerAddress;
        ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::SystemAddress>> remainingServersToTry;
        ::ll::TypedStorage<8, 288, ::RakNet::BitStream>                             serverSelectionBitstream;
        ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::UDPProxyCoordinator::ServerWithPing>>
            sourceServerPings;
        ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::UDPProxyCoordinator::ServerWithPing>>
                                       targetServerPings;
        ::ll::TypedStorage<4, 4, uint> timeRequestedPings;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::SystemAddress>> serverList;
    ::ll::TypedStorage<
        8,
        16,
        ::DataStructures::OrderedList<
            ::RakNet::UDPProxyCoordinator::SenderAndTargetAddress,
            ::RakNet::UDPProxyCoordinator::ForwardingRequest*,
            $unknown_type>>
                                                  forwardingRequestList;
    ::ll::TypedStorage<8, 8, ::RakNet::RakString> remoteLoginPassword;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UDPProxyCoordinator() /*override*/ = default;

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
