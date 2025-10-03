#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_FailedConnectionAttemptReason.h"
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/SimpleMutex.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class UDPForwarder; }
namespace RakNet { struct Packet; }
namespace RakNet { struct Router2DebugInterface; }
// clang-format on

namespace RakNet {

class Router2 : public ::RakNet::PluginInterface2 {
public:
    // Router2 inner types declare
    // clang-format off
    struct ConnectionRequestSystem;
    struct ConnnectRequest;
    struct ForwardedConnection;
    struct MiniPunchRequest;
    // clang-format on

    // Router2 inner types define
    enum class Router2RequestStates : int {
        R2rsRequestStateQueryForwarding = 0,
        RequestStateRequestForwarding   = 1,
    };

    struct ConnectionRequestSystem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID> guid;
        ::ll::TypedStorage<4, 4, int>                   pingToEndpoint;
        ::ll::TypedStorage<2, 2, ushort>                usedForwardingEntries;
        // NOLINTEND
    };

    struct ConnnectRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::Router2::ConnectionRequestSystem>>
                                                                          connectionRequestSystems;
        ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                  connectionRequestSystemsMutex;
        ::ll::TypedStorage<4, 4, ::RakNet::Router2::Router2RequestStates> requestState;
        ::ll::TypedStorage<4, 4, uint>                                    pingTimeout;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>                   endpointGuid;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>                   lastRequestedForwardingSystem;
        ::ll::TypedStorage<1, 1, bool>                                    returnConnectionLostOnFailure;
        // NOLINTEND
    };

    struct MiniPunchRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     endpointGuid;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> endpointAddress;
        ::ll::TypedStorage<1, 1, bool>                      gotReplyFromEndpoint;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     sourceGuid;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> sourceAddress;
        ::ll::TypedStorage<1, 1, bool>                      gotReplyFromSource;
        ::ll::TypedStorage<4, 4, uint>                      timeout;
        ::ll::TypedStorage<4, 4, uint>                      nextAction;
        ::ll::TypedStorage<2, 2, ushort>                    forwardingPort;
        ::ll::TypedStorage<8, 8, uint64>                    forwardingSocket;
        // NOLINTEND
    };

    struct ForwardedConnection {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     endpointGuid;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     intermediaryGuid;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> intermediaryAddress;
        ::ll::TypedStorage<1, 1, bool>                      returnConnectionLostOnFailure;
        ::ll::TypedStorage<1, 1, bool>                      weInitiatedForwarding;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RakNet::UDPForwarder*>                                      udpForwarder;
    ::ll::TypedStorage<4, 4, int>                                                          maximumForwardingRequests;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                                       connectionRequestsMutex;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                                       miniPunchesInProgressMutex;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                                       forwardedConnectionListMutex;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::Router2::ConnnectRequest*>> connectionRequests;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::Router2::MiniPunchRequest>> miniPunchesInProgress;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::Router2::ForwardedConnection>> forwardedConnectionList;
    ::ll::TypedStorage<8, 8, ::RakNet::Router2DebugInterface*>                                debugInterface;
    ::ll::TypedStorage<2, 2, ushort>                                                          socketFamily;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Router2() /*override*/ = default;

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

    // vIndex: 3
    virtual void Update() /*override*/;

    // vIndex: 7
    virtual void OnClosedConnection(
        ::RakNet::SystemAddress const&,
        ::RakNet::RakNetGUID,
        ::RakNet::PI2_LostConnectionReason
    ) /*override*/;

    // vIndex: 9
    virtual void OnFailedConnectionAttempt(::RakNet::Packet*, ::RakNet::PI2_FailedConnectionAttemptReason) /*override*/;

    // vIndex: 6
    virtual void OnRakPeerShutdown() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
