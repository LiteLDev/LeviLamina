#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PRO.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class Connection_RM3; }
namespace RakNet { class NetworkIDManager; }
namespace RakNet { class Replica3; }
namespace RakNet { struct Packet; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class ReplicaManager3 : public ::RakNet::PluginInterface2 {
public:
    // ReplicaManager3 inner types declare
    // clang-format off
    struct RM3World;
    // clang-format on

    // ReplicaManager3 inner types define
    struct RM3World {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::Connection_RM3*>> connectionList;
        ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::Replica3*>>       userReplicaList;
        ::ll::TypedStorage<1, 1, uchar>                                              worldId;
        ::ll::TypedStorage<8, 8, ::RakNet::NetworkIDManager*>                        networkIDManager;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::RakNet::PRO>                                defaultSendParameters;
    ::ll::TypedStorage<8, 8, uint64>                                        autoSerializeInterval;
    ::ll::TypedStorage<8, 8, uint64>                                        lastAutoSerializeOccurance;
    ::ll::TypedStorage<1, 1, bool>                                          autoCreateConnections;
    ::ll::TypedStorage<1, 1, bool>                                          autoDestroyConnections;
    ::ll::TypedStorage<8, 8, ::RakNet::Replica3*>                           currentlyDeallocatingReplica;
    ::ll::TypedStorage<4, 4, uint>                                          nextReferenceIndex;
    ::ll::TypedStorage<8, 2040, ::RakNet::ReplicaManager3::RM3World* [255]> worldsArray;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::ReplicaManager3::RM3World*>> worldsList;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ReplicaManager3() /*override*/ = default;

    // vIndex: 17
    virtual ::RakNet::Connection_RM3* AllocConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID) const = 0;

    // vIndex: 18
    virtual void DeallocConnection(::RakNet::Connection_RM3*) const = 0;

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

    // vIndex: 6
    virtual void OnRakPeerShutdown() /*override*/;

    // vIndex: 2
    virtual void OnDetach() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
