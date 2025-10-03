#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/AddressOrGUID.h"
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"
#include "mc/deps/raknet/RakString.h"
#include "mc/deps/raknet/data_structures/List.h"
#include "mc/deps/raknet/data_structures/Queue.h"

// auto generated forward declare list
// clang-format off
namespace DataStructures { class Hash; }
namespace RakNet { struct Packet; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class TwoWayAuthentication : public ::RakNet::PluginInterface2 {
public:
    // TwoWayAuthentication inner types declare
    // clang-format off
    struct NonceAndRemoteSystemRequest;
    struct NonceGenerator;
    struct PendingChallenge;
    // clang-format on

    // TwoWayAuthentication inner types define
    struct PendingChallenge {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::RakNet::RakString>       identifier;
        ::ll::TypedStorage<8, 152, ::RakNet::AddressOrGUID> remoteSystem;
        ::ll::TypedStorage<8, 8, uint64>                    time;
        ::ll::TypedStorage<1, 1, bool>                      sentHash;
        // NOLINTEND
    };

    struct NonceAndRemoteSystemRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 20, char[20]>                 nonce;
        ::ll::TypedStorage<8, 152, ::RakNet::AddressOrGUID> remoteSystem;
        ::ll::TypedStorage<2, 2, ushort>                    requestId;
        ::ll::TypedStorage<8, 8, uint64>                    whenGenerated;
        // NOLINTEND
    };

    struct NonceGenerator {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::TwoWayAuthentication::NonceAndRemoteSystemRequest*>>
                                         generatedNonces;
        ::ll::TypedStorage<2, 2, ushort> nextRequestId;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::TwoWayAuthentication::PendingChallenge>>
        outgoingChallenges;
    ::ll::TypedStorage<8, 16, ::DataStructures::Hash<::RakNet::RakString, ::RakNet::RakString, 16, $unknown_type>>
                                                                              passwords;
    ::ll::TypedStorage<8, 8, uint64>                                          whenLastTimeoutCheck;
    ::ll::TypedStorage<8, 24, ::RakNet::TwoWayAuthentication::NonceGenerator> nonceGenerator;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TwoWayAuthentication() /*override*/ = default;

    // vIndex: 3
    virtual void Update() /*override*/;

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

    // vIndex: 6
    virtual void OnRakPeerShutdown() /*override*/;

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
