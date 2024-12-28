#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ESendType.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/SignalingChannelId.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/PeerConnectionObserver.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class CandidateAdd; }
namespace NetherNet { class ConnectResponse; }
namespace NetherNet { class NetworkSessionManager; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct SessionState; }
namespace cricket { class Candidate; }
namespace webrtc { class DataChannelInterface; }
namespace webrtc { class IceCandidateInterface; }
namespace webrtc { class SessionDescriptionInterface; }
namespace webrtc { class StatsReport; }
// clang-format on

namespace NetherNet {

class NetworkSession : public ::webrtc::PeerConnectionObserver {
public:
    // NetworkSession inner types define
    enum class Direction : int {
        Incoming = 0,
        Outgoing = 1,
    };

    enum class ENegotiationState : int {
        None               = 0,
        WaitingForResponse = 1,
        WaitingForAccept   = 2,
        ICEProcessing      = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk40ae53;
    ::ll::UntypedStorage<8, 8>  mUnk111840;
    ::ll::UntypedStorage<4, 8>  mUnk2aae3b;
    ::ll::UntypedStorage<1, 1>  mUnk3ebc21;
    ::ll::UntypedStorage<1, 1>  mUnk266d1b;
    ::ll::UntypedStorage<8, 8>  mUnk91aff3;
    ::ll::UntypedStorage<8, 8>  mUnkb2ad91;
    ::ll::UntypedStorage<8, 8>  mUnkea75f3;
    ::ll::UntypedStorage<8, 24> mUnk67ae30;
    ::ll::UntypedStorage<8, 8>  mUnkcd4a0d;
    ::ll::UntypedStorage<4, 4>  mUnk4e1a8f;
    ::ll::UntypedStorage<4, 4>  mUnk592b9c;
    ::ll::UntypedStorage<8, 8>  mUnk5fa546;
    ::ll::UntypedStorage<8, 8>  mUnkfbc314;
    ::ll::UntypedStorage<8, 24> mUnk8f808f;
    ::ll::UntypedStorage<8, 80> mUnkab1f83;
    ::ll::UntypedStorage<8, 8>  mUnk3f0d55;
    ::ll::UntypedStorage<8, 24> mUnk4b972a;
    ::ll::UntypedStorage<4, 4>  mUnk8129d9;
    ::ll::UntypedStorage<8, 8>  mUnkd4f9be;
    ::ll::UntypedStorage<8, 24> mUnk88254f;
    ::ll::UntypedStorage<4, 4>  mUnk9694d4;
    ::ll::UntypedStorage<8, 80> mUnk3ff530;
    ::ll::UntypedStorage<8, 80> mUnkd90e28;
    ::ll::UntypedStorage<1, 1>  mUnk8e829f;
    ::ll::UntypedStorage<4, 4>  mUnk176dca;
    ::ll::UntypedStorage<8, 8>  mUnkab8289;
    ::ll::UntypedStorage<8, 8>  mUnkd7eef8;
    ::ll::UntypedStorage<8, 8>  mUnkd79473;
    ::ll::UntypedStorage<8, 8>  mUnke38c96;
    ::ll::UntypedStorage<8, 8>  mUnk145b14;
    ::ll::UntypedStorage<8, 8>  mUnk8cfde7;
    ::ll::UntypedStorage<8, 8>  mUnk2ade01;
    ::ll::UntypedStorage<4, 4>  mUnk4aa38e;
    ::ll::UntypedStorage<8, 8>  mUnk8c1be4;
    ::ll::UntypedStorage<1, 1>  mUnk3269ad;
    ::ll::UntypedStorage<8, 8>  mUnk5e8ac3;
    ::ll::UntypedStorage<4, 8>  mUnk6ac63a;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkSession& operator=(NetworkSession const&);
    NetworkSession(NetworkSession const&);
    NetworkSession();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkSession() /*override*/;

    // vIndex: 1
    virtual void OnSignalingChange(::webrtc::PeerConnectionInterface::SignalingState) /*override*/;

    // vIndex: 4
    virtual void OnDataChannel(::webrtc::scoped_refptr<::webrtc::DataChannelInterface> pDataChannel) /*override*/;

    // vIndex: 5
    virtual void OnRenegotiationNeeded() /*override*/;

    // vIndex: 7
    virtual void OnIceConnectionChange(::webrtc::PeerConnectionInterface::IceConnectionState new_state) /*override*/;

    // vIndex: 9
    virtual void OnConnectionChange(::webrtc::PeerConnectionInterface::PeerConnectionState new_state) /*override*/;

    // vIndex: 10
    virtual void OnIceGatheringChange(::webrtc::PeerConnectionInterface::IceGatheringState new_state) /*override*/;

    // vIndex: 11
    virtual void OnIceCandidate(::webrtc::IceCandidateInterface const* candidate) /*override*/;

    // vIndex: 13
    virtual void OnIceCandidatesRemoved(::std::vector<::cricket::Candidate> const&) /*override*/;

    // vIndex: 14
    virtual void OnIceConnectionReceivingChange(bool) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void CheckSendDeferredData();

    MCAPI void CheckUpdateStats();

    MCAPI void CloseWithReason(::NetherNet::ESessionError error) const;

    MCAPI void EnterNewNegotiationState(::NetherNet::NetworkSession::ENegotiationState negotiationState);

    MCAPI bool GetSessionState(::NetherNet::SessionState* pSessionState);

    MCAPI ::NetherNet::ESessionError InitializeIncoming(
        ::NetherNet::NetworkID                                   remoteID,
        uint64 const&                                            connectionID,
        ::std::unique_ptr<::webrtc::SessionDescriptionInterface> pSessionDescription,
        ::NetherNet::SignalingChannelId                          preference
    );

    MCAPI void InitializeOutgoing(::NetherNet::NetworkID remoteID);

    MCAPI bool IsConnectionAlive() const;

    MCAPI ::NetherNet::ESessionError IsDeadSession(::std::chrono::seconds negotiationTimeout);

    MCAPI ::NetherNet::ESessionError IsInactiveSession();

    MCAPI void MaybeProcessIceCandidates();

    MCAPI explicit NetworkSession(::NetherNet::NetworkSessionManager* pManager);

    MCAPI NetworkSession(::NetherNet::NetworkSessionManager* pManager, uint64 connectionId);

    MCAPI void OnSetRemoteDescriptionSuccess();

    MCAPI void OnStatsRequestComplete(::std::vector<::webrtc::StatsReport const*> const& reports);

    MCAPI void ProcessSignal(::NetherNet::CandidateAdd const& signal);

    MCAPI void ProcessSignal(::NetherNet::ConnectResponse const& signal);

    MCAPI void SendPacket(char const* pbData, uint cbData, ::NetherNet::ESendType eSendType);

    MCAPI void TrySendSessionResponse();

    MCAPI void UpdateDataChannelStates();

    MCAPI void UpdateSessionActivity();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::NetherNet::NetworkSessionManager* pManager);

    MCAPI void* $ctor(::NetherNet::NetworkSessionManager* pManager, uint64 connectionId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $OnSignalingChange(::webrtc::PeerConnectionInterface::SignalingState);

    MCAPI void $OnDataChannel(::webrtc::scoped_refptr<::webrtc::DataChannelInterface> pDataChannel);

    MCAPI void $OnRenegotiationNeeded();

    MCAPI void $OnIceConnectionChange(::webrtc::PeerConnectionInterface::IceConnectionState new_state);

    MCAPI void $OnConnectionChange(::webrtc::PeerConnectionInterface::PeerConnectionState new_state);

    MCAPI void $OnIceGatheringChange(::webrtc::PeerConnectionInterface::IceGatheringState new_state);

    MCAPI void $OnIceCandidate(::webrtc::IceCandidateInterface const* candidate);

    MCAPI void $OnIceCandidatesRemoved(::std::vector<::cricket::Candidate> const&);

    MCAPI void $OnIceConnectionReceivingChange(bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
