#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/BitStream.h"
#include "mc/deps/raknet/PI2_FailedConnectionAttemptReason.h"
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/RakString.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
// clang-format on

namespace RakNet {

class FullyConnectedMesh2 : public ::RakNet::PluginInterface2 {
public:
    // FullyConnectedMesh2 inner types declare
    // clang-format off
    struct FCM2Participant;
    struct VerifiedJoinInProgress;
    struct VerifiedJoinInProgressMember;
    // clang-format on

    // FullyConnectedMesh2 inner types define
    struct FCM2Participant {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, int64>                 fcm2Guid;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID> rakNetGuid;
        // NOLINTEND
    };

    enum class JoinInProgressState : int {
        Processing  = 0,
        Failed      = 1,
        Connected   = 2,
        Unnecessary = 3,
    };

    struct VerifiedJoinInProgressMember {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>                          systemAddress;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>                              guid;
        ::ll::TypedStorage<4, 4, ::RakNet::FullyConnectedMesh2::JoinInProgressState> joinInProgressState;
        ::ll::TypedStorage<8, 8, ::RakNet::BitStream*>                               userData;
        ::ll::TypedStorage<1, 1, bool>                                               workingFlag;
        // NOLINTEND
    };

    struct VerifiedJoinInProgress {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID> requester;
        ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::FullyConnectedMesh2::VerifiedJoinInProgressMember>>
            vjipMembers;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> startupTime;
    ::ll::TypedStorage<1, 1, bool>   autoParticipateConnections;
    ::ll::TypedStorage<4, 4, uint>   totalConnectionCount;
    ::ll::TypedStorage<8, 8, int64>  ourFCMGuid;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::FullyConnectedMesh2::FCM2Participant*>>
                                                    fcm2ParticipantList;
    ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID> lastPushedHost;
    ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID> hostRakNetGuid;
    ::ll::TypedStorage<8, 8, int64>                 hostFCM2Guid;
    ::ll::TypedStorage<8, 8, ::RakNet::RakString>   connectionPassword;
    ::ll::TypedStorage<1, 1, bool>                  connectOnNewRemoteConnections;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::FullyConnectedMesh2::VerifiedJoinInProgress*>>
                                                    joinsInProgress;
    ::ll::TypedStorage<8, 288, ::RakNet::BitStream> myContext;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FullyConnectedMesh2() /*override*/ = default;

    // vIndex: 17
    virtual void StartVerifiedJoin(::RakNet::RakNetGUID);

    // vIndex: 18
    virtual void RespondOnVerifiedJoinCapable(::RakNet::Packet*, bool, ::RakNet::BitStream*);

    // vIndex: 19
    virtual void GetVerifiedJoinRequiredProcessingList(
        ::RakNet::RakNetGUID,
        ::DataStructures::List<::RakNet::SystemAddress>&,
        ::DataStructures::List<::RakNet::RakNetGUID>&,
        ::DataStructures::List<::RakNet::BitStream*>&
    );

    // vIndex: 20
    virtual void GetVerifiedJoinAcceptedAdditionalData(
        ::RakNet::Packet*,
        bool*,
        ::DataStructures::List<::RakNet::RakNetGUID>&,
        ::RakNet::BitStream*
    );

    // vIndex: 21
    virtual void GetVerifiedJoinRejectedAdditionalData(::RakNet::Packet*, ::RakNet::BitStream*);

    // vIndex: 22
    virtual void WriteVJCUserData(::RakNet::BitStream*);

    // vIndex: 23
    virtual void WriteVJSUserData(::RakNet::BitStream*, ::RakNet::RakNetGUID);

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

    // vIndex: 5
    virtual void OnRakPeerStartup() /*override*/;

    // vIndex: 1
    virtual void OnAttach() /*override*/;

    // vIndex: 6
    virtual void OnRakPeerShutdown() /*override*/;

    // vIndex: 7
    virtual void OnClosedConnection(
        ::RakNet::SystemAddress const&,
        ::RakNet::RakNetGUID,
        ::RakNet::PI2_LostConnectionReason
    ) /*override*/;

    // vIndex: 8
    virtual void OnNewConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, bool) /*override*/;

    // vIndex: 9
    virtual void OnFailedConnectionAttempt(::RakNet::Packet*, ::RakNet::PI2_FailedConnectionAttemptReason) /*override*/;

    // vIndex: 24
    virtual void OnVerifiedJoinFailed(::RakNet::RakNetGUID, bool);

    // vIndex: 25
    virtual void OnVerifiedJoinAccepted(::RakNet::Packet*);

    // vIndex: 26
    virtual void OnVerifiedJoinRejected(::RakNet::Packet*);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
