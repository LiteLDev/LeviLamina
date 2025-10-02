#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"
#include "mc/deps/raknet/RakNetGUID.h"

// auto generated forward declare list
// clang-format off
namespace DataStructures { class OrderedList; }
namespace RakNet { struct Packet; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class ReadyEvent : public ::RakNet::PluginInterface2 {
public:
    // ReadyEvent inner types declare
    // clang-format off
    struct ReadyEventNode;
    struct RemoteSystem;
    // clang-format on

    // ReadyEvent inner types define
    struct RemoteSystem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, uchar>                 lastSentStatus;
        ::ll::TypedStorage<1, 1, uchar>                 lastReceivedStatus;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID> rakNetGuid;
        // NOLINTEND
    };

    struct ReadyEventNode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>   eventId;
        ::ll::TypedStorage<1, 1, uchar> eventStatus;
        ::ll::TypedStorage<
            8,
            16,
            ::DataStructures::OrderedList<::RakNet::RakNetGUID, ::RakNet::ReadyEvent::RemoteSystem, $unknown_type>>
            systemList;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::DataStructures::OrderedList<int, ::RakNet::ReadyEvent::ReadyEventNode*, $unknown_type>>
                                    readyEventNodeList;
    ::ll::TypedStorage<1, 1, uchar> channel;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ReadyEvent() /*override*/ = default;

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

    // vIndex: 7
    virtual void OnClosedConnection(
        ::RakNet::SystemAddress const&,
        ::RakNet::RakNetGUID,
        ::RakNet::PI2_LostConnectionReason
    ) /*override*/;

    // vIndex: 6
    virtual void OnRakPeerShutdown() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
