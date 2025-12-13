#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/SendSerializeIfChangedResult.h"
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
namespace RakNet { class RakPeerInterface; }
namespace RakNet { class Replica3; }
namespace RakNet { class ReplicaManager3; }
namespace RakNet { struct LastSerializationResult; }
namespace RakNet { struct PRO; }
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
    ::ll::UntypedStorage<1, 1>   mUnk4719ed;
    ::ll::UntypedStorage<1, 1>   mUnkbb7fd9;
    ::ll::UntypedStorage<8, 136> mUnka34d2b;
    ::ll::UntypedStorage<8, 16>  mUnk66208a;
    ::ll::UntypedStorage<8, 16>  mUnk560121;
    ::ll::UntypedStorage<8, 16>  mUnkc31f4d;
    ::ll::UntypedStorage<8, 16>  mUnk249481;
    ::ll::UntypedStorage<8, 16>  mUnka07060;
    ::ll::UntypedStorage<8, 16>  mUnk8b273f;
    ::ll::UntypedStorage<8, 16>  mUnk35727e;
    ::ll::UntypedStorage<1, 1>   mUnkcb13c1;
    ::ll::UntypedStorage<8, 24>  mUnkca9727;
    ::ll::UntypedStorage<1, 1>   mUnke0417e;
    ::ll::UntypedStorage<4, 4>   mUnk529875;
    // NOLINTEND

public:
    // prevent constructor by default
    Connection_RM3& operator=(Connection_RM3 const&);
    Connection_RM3(Connection_RM3 const&);
    Connection_RM3();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Connection_RM3() = default;

    virtual ::RakNet::Replica3* AllocReplica(::RakNet::BitStream*, ::RakNet::ReplicaManager3*) = 0;

    virtual void GetConstructedReplicas(::DataStructures::List<::RakNet::Replica3*>&);

    virtual void SerializeOnDownloadStarted(::RakNet::BitStream*);

    virtual void DeserializeOnDownloadStarted(::RakNet::BitStream*);

    virtual void SerializeOnDownloadComplete(::RakNet::BitStream*);

    virtual void DeserializeOnDownloadComplete(::RakNet::BitStream*);

    virtual bool QueryGroupDownloadMessages() const;

    virtual ::RakNet::Connection_RM3::ConstructionMode QueryConstructionMode() const;

    virtual void
    QueryReplicaList(::DataStructures::List<::RakNet::Replica3*>&, ::DataStructures::List<::RakNet::Replica3*>&);

    virtual bool QuerySerializationList(::DataStructures::List<::RakNet::Replica3*>&);

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

    virtual ::RakNet::SendSerializeIfChangedResult SendSerializeIfChanged(
        ::RakNet::LastSerializationResult*,
        ::RakNet::SerializeParameters*,
        ::RakNet::RakPeerInterface*,
        uchar,
        ::RakNet::ReplicaManager3*,
        uint64
    );

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
