#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/SystemAddress.h"

// auto generated forward declare list
// clang-format off
namespace DataStructures { class OrderedList; }
namespace RakNet { struct Packet; }
// clang-format on

namespace RakNet {

class ConnectionGraph2 : public ::RakNet::PluginInterface2 {
public:
    // ConnectionGraph2 inner types declare
    // clang-format off
    struct RemoteSystem;
    struct SystemAddressAndGuid;
    // clang-format on

    // ConnectionGraph2 inner types define
    struct SystemAddressAndGuid {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> systemAddress;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     guid;
        ::ll::TypedStorage<2, 2, ushort>                    sendersPingToThatSystem;
        // NOLINTEND
    };

    struct RemoteSystem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            16,
            ::DataStructures::OrderedList<
                ::RakNet::ConnectionGraph2::SystemAddressAndGuid,
                ::RakNet::ConnectionGraph2::SystemAddressAndGuid,
                $unknown_type>>
                                                        remoteConnections;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID> guid;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        16,
        ::DataStructures::OrderedList<::RakNet::RakNetGUID, ::RakNet::ConnectionGraph2::RemoteSystem*, $unknown_type>>
                                   remoteSystems;
    ::ll::TypedStorage<1, 1, bool> autoProcessNewConnections;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ConnectionGraph2() /*override*/ = default;

    // vIndex: 7
    virtual void OnClosedConnection(
        ::RakNet::SystemAddress const&,
        ::RakNet::RakNetGUID,
        ::RakNet::PI2_LostConnectionReason
    ) /*override*/;

    // vIndex: 8
    virtual void OnNewConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, bool) /*override*/;

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
