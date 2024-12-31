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
    // vIndex: 0
    virtual ~Replica3() /*override*/ = default;

    // vIndex: 7
    virtual void WriteAllocationID(::RakNet::Connection_RM3*, ::RakNet::BitStream*) const = 0;

    // vIndex: 8
    virtual ::RakNet::RM3ConstructionState QueryConstruction(::RakNet::Connection_RM3*, ::RakNet::ReplicaManager3*) = 0;

    // vIndex: 9
    virtual ::RakNet::RM3DestructionState QueryDestruction(::RakNet::Connection_RM3*, ::RakNet::ReplicaManager3*);

    // vIndex: 10
    virtual bool QueryRemoteConstruction(::RakNet::Connection_RM3*) = 0;

    // vIndex: 11
    virtual bool QueryRelayDestruction(::RakNet::Connection_RM3*) const;

    // vIndex: 12
    virtual void SerializeConstruction(::RakNet::BitStream*, ::RakNet::Connection_RM3*) = 0;

    // vIndex: 13
    virtual bool DeserializeConstruction(::RakNet::BitStream*, ::RakNet::Connection_RM3*) = 0;

    // vIndex: 14
    virtual void SerializeConstructionExisting(::RakNet::BitStream*, ::RakNet::Connection_RM3*);

    // vIndex: 15
    virtual void DeserializeConstructionExisting(::RakNet::BitStream*, ::RakNet::Connection_RM3*);

    // vIndex: 16
    virtual void SerializeDestruction(::RakNet::BitStream*, ::RakNet::Connection_RM3*) = 0;

    // vIndex: 17
    virtual bool DeserializeDestruction(::RakNet::BitStream*, ::RakNet::Connection_RM3*) = 0;

    // vIndex: 18
    virtual ::RakNet::RM3ActionOnPopConnection QueryActionOnPopConnection(::RakNet::Connection_RM3*) const = 0;

    // vIndex: 19
    virtual void OnPoppedConnection(::RakNet::Connection_RM3*);

    // vIndex: 20
    virtual void DeallocReplica(::RakNet::Connection_RM3*) = 0;

    // vIndex: 21
    virtual ::RakNet::RM3QuerySerializationResult QuerySerialization(::RakNet::Connection_RM3*) = 0;

    // vIndex: 22
    virtual void OnUserReplicaPreSerializeTick();

    // vIndex: 23
    virtual ::RakNet::RM3SerializationResult Serialize(::RakNet::SerializeParameters*) = 0;

    // vIndex: 24
    virtual void OnSerializeTransmission(::RakNet::BitStream*, ::RakNet::Connection_RM3*, uint*, uint64);

    // vIndex: 25
    virtual void Deserialize(::RakNet::DeserializeParameters*) = 0;

    // vIndex: 26
    virtual void PostSerializeConstruction(::RakNet::BitStream*, ::RakNet::Connection_RM3*);

    // vIndex: 27
    virtual void PostDeserializeConstruction(::RakNet::BitStream*, ::RakNet::Connection_RM3*);

    // vIndex: 28
    virtual void PostSerializeConstructionExisting(::RakNet::BitStream*, ::RakNet::Connection_RM3*);

    // vIndex: 29
    virtual void PostDeserializeConstructionExisting(::RakNet::BitStream*, ::RakNet::Connection_RM3*);

    // vIndex: 30
    virtual void PreDestruction(::RakNet::Connection_RM3*);

    // vIndex: 31
    virtual ::RakNet::RM3ConstructionState QueryConstruction_ClientConstruction(::RakNet::Connection_RM3*, bool);

    // vIndex: 32
    virtual bool QueryRemoteConstruction_ClientConstruction(::RakNet::Connection_RM3*, bool);

    // vIndex: 33
    virtual ::RakNet::RM3ConstructionState QueryConstruction_ServerConstruction(::RakNet::Connection_RM3*, bool);

    // vIndex: 34
    virtual bool QueryRemoteConstruction_ServerConstruction(::RakNet::Connection_RM3*, bool);

    // vIndex: 35
    virtual ::RakNet::RM3ConstructionState
    QueryConstruction_PeerToPeer(::RakNet::Connection_RM3*, ::RakNet::Replica3P2PMode);

    // vIndex: 36
    virtual bool QueryRemoteConstruction_PeerToPeer(::RakNet::Connection_RM3*);

    // vIndex: 37
    virtual ::RakNet::RM3QuerySerializationResult
    QuerySerialization_ClientSerializable(::RakNet::Connection_RM3*, bool);

    // vIndex: 38
    virtual ::RakNet::RM3QuerySerializationResult
    QuerySerialization_ServerSerializable(::RakNet::Connection_RM3*, bool);

    // vIndex: 39
    virtual ::RakNet::RM3QuerySerializationResult
    QuerySerialization_PeerToPeer(::RakNet::Connection_RM3*, ::RakNet::Replica3P2PMode);

    // vIndex: 40
    virtual ::RakNet::RM3ActionOnPopConnection QueryActionOnPopConnection_Client(::RakNet::Connection_RM3*) const;

    // vIndex: 41
    virtual ::RakNet::RM3ActionOnPopConnection QueryActionOnPopConnection_Server(::RakNet::Connection_RM3*) const;

    // vIndex: 42
    virtual ::RakNet::RM3ActionOnPopConnection QueryActionOnPopConnection_PeerToPeer(::RakNet::Connection_RM3*) const;

    // vIndex: 43
    virtual void BroadcastDestruction();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
