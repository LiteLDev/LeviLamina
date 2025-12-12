#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_FailedConnectionAttemptReason.h"
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
namespace RakNet { struct Packet; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class FullyConnectedMesh2 : public ::RakNet::PluginInterface2 {
public:
    // FullyConnectedMesh2 inner types declare
    // clang-format off
    struct FCM2Participant;
    struct VerifiedJoinInProgressMember;
    struct VerifiedJoinInProgress;
    // clang-format on

    // FullyConnectedMesh2 inner types define
    enum class JoinInProgressState : int {
        Processing  = 0,
        Failed      = 1,
        Connected   = 2,
        Unnecessary = 3,
    };

    struct FCM2Participant {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkd3b800;
        ::ll::UntypedStorage<8, 16> mUnka116e0;
        // NOLINTEND

    public:
        // prevent constructor by default
        FCM2Participant& operator=(FCM2Participant const&);
        FCM2Participant(FCM2Participant const&);
        FCM2Participant();
    };

    struct VerifiedJoinInProgressMember {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 136> mUnkd2dd5d;
        ::ll::UntypedStorage<8, 16>  mUnkb562b3;
        ::ll::UntypedStorage<4, 4>   mUnk99045d;
        ::ll::UntypedStorage<8, 8>   mUnk775fe8;
        ::ll::UntypedStorage<1, 1>   mUnke52207;
        // NOLINTEND

    public:
        // prevent constructor by default
        VerifiedJoinInProgressMember& operator=(VerifiedJoinInProgressMember const&);
        VerifiedJoinInProgressMember(VerifiedJoinInProgressMember const&);
        VerifiedJoinInProgressMember();
    };

    struct VerifiedJoinInProgress {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkf47efe;
        ::ll::UntypedStorage<8, 16> mUnk8541f4;
        // NOLINTEND

    public:
        // prevent constructor by default
        VerifiedJoinInProgress& operator=(VerifiedJoinInProgress const&);
        VerifiedJoinInProgress(VerifiedJoinInProgress const&);
        VerifiedJoinInProgress();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk181b6d;
    ::ll::UntypedStorage<1, 1>   mUnkc7d6cb;
    ::ll::UntypedStorage<4, 4>   mUnkaa2fc6;
    ::ll::UntypedStorage<8, 8>   mUnk42ee15;
    ::ll::UntypedStorage<8, 16>  mUnk86a935;
    ::ll::UntypedStorage<8, 16>  mUnk232c51;
    ::ll::UntypedStorage<8, 16>  mUnkde6ad5;
    ::ll::UntypedStorage<8, 8>   mUnkaf1cc5;
    ::ll::UntypedStorage<8, 8>   mUnkfc9908;
    ::ll::UntypedStorage<1, 1>   mUnk316266;
    ::ll::UntypedStorage<8, 16>  mUnk4f5886;
    ::ll::UntypedStorage<8, 288> mUnke3777e;
    // NOLINTEND

public:
    // prevent constructor by default
    FullyConnectedMesh2& operator=(FullyConnectedMesh2 const&);
    FullyConnectedMesh2(FullyConnectedMesh2 const&);
    FullyConnectedMesh2();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FullyConnectedMesh2() /*override*/ = default;

    virtual void StartVerifiedJoin(::RakNet::RakNetGUID);

    virtual void RespondOnVerifiedJoinCapable(::RakNet::Packet*, bool, ::RakNet::BitStream*);

    virtual void GetVerifiedJoinRequiredProcessingList(
        ::RakNet::RakNetGUID,
        ::DataStructures::List<::RakNet::SystemAddress>&,
        ::DataStructures::List<::RakNet::RakNetGUID>&,
        ::DataStructures::List<::RakNet::BitStream*>&
    );

    virtual void GetVerifiedJoinAcceptedAdditionalData(
        ::RakNet::Packet*,
        bool*,
        ::DataStructures::List<::RakNet::RakNetGUID>&,
        ::RakNet::BitStream*
    );

    virtual void GetVerifiedJoinRejectedAdditionalData(::RakNet::Packet*, ::RakNet::BitStream*);

    virtual void WriteVJCUserData(::RakNet::BitStream*);

    virtual void WriteVJSUserData(::RakNet::BitStream*, ::RakNet::RakNetGUID);

    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

    virtual void OnRakPeerStartup() /*override*/;

    virtual void OnAttach() /*override*/;

    virtual void OnRakPeerShutdown() /*override*/;

    virtual void OnClosedConnection(
        ::RakNet::SystemAddress const&,
        ::RakNet::RakNetGUID,
        ::RakNet::PI2_LostConnectionReason
    ) /*override*/;

    virtual void OnNewConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, bool) /*override*/;

    virtual void OnFailedConnectionAttempt(::RakNet::Packet*, ::RakNet::PI2_FailedConnectionAttemptReason) /*override*/;

    virtual void OnVerifiedJoinFailed(::RakNet::RakNetGUID, bool);

    virtual void OnVerifiedJoinAccepted(::RakNet::Packet*);

    virtual void OnVerifiedJoinRejected(::RakNet::Packet*);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
