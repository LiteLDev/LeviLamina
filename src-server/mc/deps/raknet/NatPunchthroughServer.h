#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace DataStructures { class OrderedList; }
namespace RakNet { struct NatPunchthroughServerDebugInterface; }
namespace RakNet { struct Packet; }
// clang-format on

namespace RakNet {

class NatPunchthroughServer : public ::RakNet::PluginInterface2 {
public:
    // NatPunchthroughServer inner types declare
    // clang-format off
    struct ConnectionAttempt;
    struct User;
    // clang-format on

    // NatPunchthroughServer inner types define
    struct User {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     guid;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> systemAddress;
        ::ll::TypedStorage<2, 2, ushort>                    mostRecentPort;
        ::ll::TypedStorage<1, 1, bool>                      isReady;
        ::ll::TypedStorage<
            8,
            16,
            ::DataStructures::OrderedList<::RakNet::RakNetGUID, ::RakNet::RakNetGUID, $unknown_type>>
            groupPunchthroughRequests;
        ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::NatPunchthroughServer::ConnectionAttempt*>>
            connectionAttempts;
        // NOLINTEND
    };

    struct ConnectionAttempt {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::RakNet::NatPunchthroughServer::User*> sender;
        ::ll::TypedStorage<8, 8, ::RakNet::NatPunchthroughServer::User*> recipient;
        ::ll::TypedStorage<2, 2, ushort>                                 sessionId;
        ::ll::TypedStorage<8, 8, uint64>                                 startTime;
        enum : int {
            NotStarted         = 0,
            GettingRecentPorts = 1,
        } attemptPhase;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> lastUpdate;
    ::ll::TypedStorage<
        8,
        16,
        ::DataStructures::OrderedList<::RakNet::RakNetGUID, ::RakNet::NatPunchthroughServer::User*, $unknown_type>>
                                                                             users;
    ::ll::TypedStorage<2, 2, ushort>                                         sessionId;
    ::ll::TypedStorage<8, 8, ::RakNet::NatPunchthroughServerDebugInterface*> natPunchthroughServerDebugInterface;
    ::ll::TypedStorage<8, 2720, ::RakNet::SystemAddress[20]>                 boundAddresses;
    ::ll::TypedStorage<1, 1, uchar>                                          boundAddressCount;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NatPunchthroughServer() /*override*/ = default;

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

    // vIndex: 8
    virtual void OnNewConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, bool) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
