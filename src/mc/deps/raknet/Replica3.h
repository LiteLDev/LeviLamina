#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/NetworkIDObject.h"
#include "mc/deps/raknet/RM3ActionOnPopConnection.h"
#include "mc/deps/raknet/RM3ConstructionState.h"
#include "mc/deps/raknet/RM3DestructionState.h"
#include "mc/deps/raknet/RM3QuerySerializationResult.h"
#include "mc/deps/raknet/RM3SerializationResult.h"
#include "mc/deps/raknet/Replica3P2PMode.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
namespace RakNet { class Connection_RM3; }
namespace RakNet { class ReplicaManager3; }
namespace RakNet { struct DeserializeParameters; }
namespace RakNet { struct SerializeParameters; }
// clang-format on

namespace RakNet {

class Replica3 : public ::RakNet::NetworkIDObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>   mUnk3d9c16;
    ::ll::UntypedStorage<8, 16>   mUnk9ca427;
    ::ll::UntypedStorage<8, 8>    mUnk5a494c;
    ::ll::UntypedStorage<8, 4624> mUnk2204c3;
    ::ll::UntypedStorage<1, 1>    mUnk2e364c;
    ::ll::UntypedStorage<8, 8>    mUnkd8b159;
    ::ll::UntypedStorage<4, 4>    mUnk2eb728;
    // NOLINTEND

public:
    // prevent constructor by default
    Replica3& operator=(Replica3 const&);
    Replica3(Replica3 const&);
    Replica3();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Replica3() /*override*/ = default;

    virtual void WriteAllocationID(::RakNet::Connection_RM3*, ::RakNet::BitStream*) const = 0;

    virtual ::RakNet::RM3ConstructionState QueryConstruction(::RakNet::Connection_RM3*, ::RakNet::ReplicaManager3*) = 0;

    virtual ::RakNet::RM3DestructionState QueryDestruction(::RakNet::Connection_RM3*, ::RakNet::ReplicaManager3*);

    virtual bool QueryRemoteConstruction(::RakNet::Connection_RM3*) = 0;

    virtual bool QueryRelayDestruction(::RakNet::Connection_RM3*) const;

    virtual void SerializeConstruction(::RakNet::BitStream*, ::RakNet::Connection_RM3*) = 0;

    virtual bool DeserializeConstruction(::RakNet::BitStream*, ::RakNet::Connection_RM3*) = 0;

    virtual void SerializeConstructionExisting(::RakNet::BitStream*, ::RakNet::Connection_RM3*);

    virtual void DeserializeConstructionExisting(::RakNet::BitStream*, ::RakNet::Connection_RM3*);

    virtual void SerializeDestruction(::RakNet::BitStream*, ::RakNet::Connection_RM3*) = 0;

    virtual bool DeserializeDestruction(::RakNet::BitStream*, ::RakNet::Connection_RM3*) = 0;

    virtual ::RakNet::RM3ActionOnPopConnection QueryActionOnPopConnection(::RakNet::Connection_RM3*) const = 0;

    virtual void OnPoppedConnection(::RakNet::Connection_RM3*);

    virtual void DeallocReplica(::RakNet::Connection_RM3*) = 0;

    virtual ::RakNet::RM3QuerySerializationResult QuerySerialization(::RakNet::Connection_RM3*) = 0;

    virtual void OnUserReplicaPreSerializeTick();

    virtual ::RakNet::RM3SerializationResult Serialize(::RakNet::SerializeParameters*) = 0;

    virtual void OnSerializeTransmission(::RakNet::BitStream*, ::RakNet::Connection_RM3*, uint*, uint64);

    virtual void Deserialize(::RakNet::DeserializeParameters*) = 0;

    virtual void PostSerializeConstruction(::RakNet::BitStream*, ::RakNet::Connection_RM3*);

    virtual void PostDeserializeConstruction(::RakNet::BitStream*, ::RakNet::Connection_RM3*);

    virtual void PostSerializeConstructionExisting(::RakNet::BitStream*, ::RakNet::Connection_RM3*);

    virtual void PostDeserializeConstructionExisting(::RakNet::BitStream*, ::RakNet::Connection_RM3*);

    virtual void PreDestruction(::RakNet::Connection_RM3*);

    virtual ::RakNet::RM3ConstructionState QueryConstruction_ClientConstruction(::RakNet::Connection_RM3*, bool);

    virtual bool QueryRemoteConstruction_ClientConstruction(::RakNet::Connection_RM3*, bool);

    virtual ::RakNet::RM3ConstructionState QueryConstruction_ServerConstruction(::RakNet::Connection_RM3*, bool);

    virtual bool QueryRemoteConstruction_ServerConstruction(::RakNet::Connection_RM3*, bool);

    virtual ::RakNet::RM3ConstructionState
    QueryConstruction_PeerToPeer(::RakNet::Connection_RM3*, ::RakNet::Replica3P2PMode);

    virtual bool QueryRemoteConstruction_PeerToPeer(::RakNet::Connection_RM3*);

    virtual ::RakNet::RM3QuerySerializationResult
    QuerySerialization_ClientSerializable(::RakNet::Connection_RM3*, bool);

    virtual ::RakNet::RM3QuerySerializationResult
    QuerySerialization_ServerSerializable(::RakNet::Connection_RM3*, bool);

    virtual ::RakNet::RM3QuerySerializationResult
    QuerySerialization_PeerToPeer(::RakNet::Connection_RM3*, ::RakNet::Replica3P2PMode);

    virtual ::RakNet::RM3ActionOnPopConnection QueryActionOnPopConnection_Client(::RakNet::Connection_RM3*) const;

    virtual ::RakNet::RM3ActionOnPopConnection QueryActionOnPopConnection_Server(::RakNet::Connection_RM3*) const;

    virtual ::RakNet::RM3ActionOnPopConnection QueryActionOnPopConnection_PeerToPeer(::RakNet::Connection_RM3*) const;

    virtual void BroadcastDestruction();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
