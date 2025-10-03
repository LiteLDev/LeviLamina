#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/RakString.h"
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace DataStructures { class Hash; }
namespace RakNet { struct Packet; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class RelayPlugin : public ::RakNet::PluginInterface2 {
public:
    // RelayPlugin inner types declare
    // clang-format off
    struct RP_Group;
    struct StrAndGuid;
    struct StrAndGuidAndRoom;
    // clang-format on

    // RelayPlugin inner types define
    struct StrAndGuidAndRoom {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::RakNet::RakString>   str;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID> guid;
        ::ll::TypedStorage<8, 8, ::RakNet::RakString>   currentRoom;
        // NOLINTEND
    };

    struct StrAndGuid {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::RakNet::RakString>   str;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID> guid;
        // NOLINTEND
    };

    struct RP_Group {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::RakNet::RakString>                                        roomName;
        ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::RelayPlugin::StrAndGuid>> usersInRoom;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        16,
        ::DataStructures::Hash<::RakNet::RakString, ::RakNet::RelayPlugin::StrAndGuidAndRoom*, 8096, $unknown_type>>
        strToGuidHash;
    ::ll::TypedStorage<
        8,
        16,
        ::DataStructures::Hash<::RakNet::RakNetGUID, ::RakNet::RelayPlugin::StrAndGuidAndRoom*, 8096, $unknown_type>>
                                                                                        guidToStrHash;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::RelayPlugin::RP_Group*>> chatRooms;
    ::ll::TypedStorage<1, 1, bool>                                                      acceptAddParticipantRequests;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RelayPlugin() /*override*/ = default;

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
