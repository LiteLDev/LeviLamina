#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ContextProxy.h"
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
namespace cricket { class Candidate; }
namespace webrtc { class DataChannelInterface; }
namespace webrtc { class IceCandidateInterface; }
namespace webrtc { class SessionDescriptionInterface; }
namespace webrtc { class StatsReport; }
// clang-format on

namespace NetherNet {

class NetworkSession : public ::NetherNet::ContextProxy, public ::webrtc::PeerConnectionObserver {
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
    ::ll::UntypedStorage<8, 8>  mUnk11904d;
    ::ll::UntypedStorage<4, 4>  mUnk4e1a8f;
    ::ll::UntypedStorage<4, 4>  mUnk592b9c;
    ::ll::UntypedStorage<8, 8>  mUnk5fa546;
    ::ll::UntypedStorage<8, 8>  mUnkfbc314;
    ::ll::UntypedStorage<8, 24> mUnk8f808f;
    ::ll::UntypedStorage<8, 80> mUnkab1f83;
    ::ll::UntypedStorage<8, 8>  mUnk3f0d55;
    ::ll::UntypedStorage<8, 40> mUnk4a45c9;
    ::ll::UntypedStorage<4, 4>  mUnk8129d9;
    ::ll::UntypedStorage<8, 8>  mUnkd4f9be;
    ::ll::UntypedStorage<8, 40> mUnk3ba4a7;
    ::ll::UntypedStorage<4, 4>  mUnk9694d4;
    ::ll::UntypedStorage<1, 1>  mUnk65cb85;
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
    MCNAPI void CheckSendDeferredData();

    MCNAPI void CheckUpdateStats();

    MCNAPI void EnterNewNegotiationState(::NetherNet::NetworkSession::ENegotiationState negotiationState);

    MCNAPI ::NetherNet::ESessionError InitializeIncoming(
        ::NetherNet::NetworkID                                   remoteID,
        uint64 const&                                            connectionID,
        ::std::unique_ptr<::webrtc::SessionDescriptionInterface> pSessionDescription,
        ::NetherNet::SignalingChannelId                          preference
    );

    MCNAPI void InitializeOutgoing(::NetherNet::NetworkID remoteID);

    MCNAPI ::NetherNet::ESessionError IsDeadSession(::std::chrono::seconds negotiationTimeout);

    MCNAPI void MaybeProcessIceCandidates();

    MCNAPI NetworkSession(::NetherNet::ContextProxy const& ctx, ::NetherNet::NetworkSessionManager& manager);

    MCNAPI void OnStatsRequestComplete(::std::vector<::webrtc::StatsReport const*> const& reports);

    MCNAPI void ProcessSignal(::NetherNet::CandidateAdd const& signal);

    MCNAPI void ProcessSignal(::NetherNet::ConnectResponse const& signal);

    MCNAPI void SendPacket(char const* pbData, uint cbData, ::NetherNet::ESendType eSendType);

    MCNAPI void TrySendSessionResponse();

    MCNAPI void UpdateDataChannelStates();

    MCNAPI void UpdateSessionActivity();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::NetherNet::ContextProxy const& ctx, ::NetherNet::NetworkSessionManager& manager);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $OnSignalingChange(::webrtc::PeerConnectionInterface::SignalingState);

    MCNAPI void $OnDataChannel(::webrtc::scoped_refptr<::webrtc::DataChannelInterface> pDataChannel);

    MCNAPI void $OnRenegotiationNeeded();

    MCNAPI void $OnIceConnectionChange(::webrtc::PeerConnectionInterface::IceConnectionState new_state);

    MCNAPI void $OnConnectionChange(::webrtc::PeerConnectionInterface::PeerConnectionState new_state);

    MCNAPI void $OnIceGatheringChange(::webrtc::PeerConnectionInterface::IceGatheringState new_state);

    MCNAPI void $OnIceCandidate(::webrtc::IceCandidateInterface const* candidate);

    MCNAPI void $OnIceCandidatesRemoved(::std::vector<::cricket::Candidate> const&);

    MCNAPI void $OnIceConnectionReceivingChange(bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForContextProxy();

    MCNAPI static void** $vftableForPeerConnectionObserver();
    // NOLINTEND
};

} // namespace NetherNet
