#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/SendSerializeIfChangedResult.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/raknet/data_structures/List.h"
#include "mc/deps/raknet/data_structures/Queue.h"

// auto generated forward declare list
// clang-format off
namespace DataStructures { class OrderedList; }
namespace RakNet { class BitStream; }
namespace RakNet { class RakPeerInterface; }
namespace RakNet { class Replica3; }
namespace RakNet { class ReplicaManager3; }
namespace RakNet { struct LastSerializationResult; }
namespace RakNet { struct PRO; }
namespace RakNet { struct Packet; }
namespace RakNet { struct SerializeParameters; }
// clang-format on

namespace RakNet {

class Connection_RM3 {
public:
    // Connection_RM3 inner types define
    enum class ConstructionMode : int {
        ReplicaForConstruction               = 0,
        ReplicaForConstructionAndDestruction = 1,
        ConnectionForReplicaList             = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                      isValidated;
    ::ll::TypedStorage<1, 1, bool>                      isFirstConstruction;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> systemAddress;
    ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     guid;
    ::ll::TypedStorage<
        8,
        16,
        ::DataStructures::OrderedList<::RakNet::Replica3*, ::RakNet::LastSerializationResult*, $unknown_type>>
                                                                                          constructedReplicaList;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::LastSerializationResult*>> queryToConstructReplicaList;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::LastSerializationResult*>> queryToSerializeReplicaList;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::LastSerializationResult*>> queryToDestructReplicaList;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::Replica3*>>                constructedReplicasCulled;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::Replica3*>>                destroyedReplicasCulled;
    ::ll::TypedStorage<1, 1, bool>                                                        groupConstructionAndSerialize;
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::Packet*>>                 downloadGroup;
    ::ll::TypedStorage<1, 1, bool>                                                        gotDownloadComplete;
    ::ll::TypedStorage<4, 4, ::RakNet::Connection_RM3::ConstructionMode>                  constructionMode;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Connection_RM3() = default;

    // vIndex: 1
    virtual ::RakNet::Replica3* AllocReplica(::RakNet::BitStream*, ::RakNet::ReplicaManager3*) = 0;

    // vIndex: 2
    virtual void GetConstructedReplicas(::DataStructures::List<::RakNet::Replica3*>&);

    // vIndex: 3
    virtual void SerializeOnDownloadStarted(::RakNet::BitStream*);

    // vIndex: 4
    virtual void DeserializeOnDownloadStarted(::RakNet::BitStream*);

    // vIndex: 5
    virtual void SerializeOnDownloadComplete(::RakNet::BitStream*);

    // vIndex: 6
    virtual void DeserializeOnDownloadComplete(::RakNet::BitStream*);

    // vIndex: 7
    virtual bool QueryGroupDownloadMessages() const;

    // vIndex: 8
    virtual ::RakNet::Connection_RM3::ConstructionMode QueryConstructionMode() const;

    // vIndex: 9
    virtual void
    QueryReplicaList(::DataStructures::List<::RakNet::Replica3*>&, ::DataStructures::List<::RakNet::Replica3*>&);

    // vIndex: 10
    virtual bool QuerySerializationList(::DataStructures::List<::RakNet::Replica3*>&);

    // vIndex: 11
    virtual ::RakNet::SendSerializeIfChangedResult SendSerialize(
        ::RakNet::Replica3*,
        bool*,
        ::RakNet::BitStream*,
        uint64,
        ::RakNet::PRO*,
        ::RakNet::RakPeerInterface*,
        uchar,
        uint64
    );

    // vIndex: 12
    virtual ::RakNet::SendSerializeIfChangedResult SendSerializeIfChanged(
        ::RakNet::LastSerializationResult*,
        ::RakNet::SerializeParameters*,
        ::RakNet::RakPeerInterface*,
        uchar,
        ::RakNet::ReplicaManager3*,
        uint64
    );

    // vIndex: 13
    virtual void SendConstruction(
        ::DataStructures::List<::RakNet::Replica3*>&,
        ::DataStructures::List<::RakNet::Replica3*>&,
        ::RakNet::PRO,
        ::RakNet::RakPeerInterface*,
        uchar,
        ::RakNet::ReplicaManager3*
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
