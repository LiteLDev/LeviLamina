#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/PeerConnectionNegotiator.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/RTCErrorOr.h"
#include "mc/external/webrtc/scoped_refptr.h"
#include "mc/platform/Result.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class CandidateAdd; }
namespace NetherNet { class ConnectError; }
namespace NetherNet { class ConnectRequest; }
namespace NetherNet { class ConnectResponse; }
namespace NetherNet { class ContextProxy; }
namespace NetherNet { class PeerConnectionObserver; }
namespace webrtc { class IceCandidateInterface; }
namespace webrtc { class PeerConnectionFactory; }
namespace webrtc { class PeerConnectionInterface; }
namespace webrtc { class RTCError; }
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace NetherNet {

class ClientNegotiator : public ::NetherNet::PeerConnectionNegotiator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb05a57;
    ::ll::UntypedStorage<8, 16> mUnk72a7d5;
    ::ll::UntypedStorage<8, 64> mUnkcec8f2;
    ::ll::UntypedStorage<8, 24> mUnk196f66;
    ::ll::UntypedStorage<8, 16> mUnk94bb7c;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientNegotiator& operator=(ClientNegotiator const&);
    ClientNegotiator(ClientNegotiator const&);
    ClientNegotiator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 10
    virtual ::NetherNet::ESessionError checkTimeout(::std::chrono::seconds timeout) const /*override*/;

    // vIndex: 14
    virtual void _onCreateSession(::webrtc::RTCErrorOr<::webrtc::SessionDescriptionInterface*> const& offerOrError) /*override*/;

    // vIndex: 15
    virtual void _onSetLocalDescription(::webrtc::RTCError result) /*override*/;

    // vIndex: 11
    virtual void onRemoteAnswer(::NetherNet::ConnectResponse const& answer) /*override*/;

    // vIndex: 12
    virtual void onRemoteError(::NetherNet::ConnectError const& error) /*override*/;

    // vIndex: 16
    virtual void _onSetRemoteDescription(::webrtc::RTCError result) /*override*/;

    // vIndex: 17
    virtual void _onLocalIceCandidate(::webrtc::IceCandidateInterface const* iceCandidate);

    // vIndex: 13
    virtual void onRemoteIceCandidate(::NetherNet::CandidateAdd const& candidate) /*override*/;

    // vIndex: 0
    virtual ~ClientNegotiator() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientNegotiator(::NetherNet::ContextProxy const& ctx, ::webrtc::scoped_refptr<::webrtc::PeerConnectionFactory> factory, ::webrtc::scoped_refptr<::NetherNet::PeerConnectionObserver> observer, ::brstd::move_only_function<void(::std::variant<::NetherNet::ConnectRequest, ::NetherNet::ConnectResponse, ::NetherNet::ConnectError, ::NetherNet::CandidateAdd> const&)const> sendMessage, uint64 sessionId);

    MCNAPI void _onIceConnectionChanged(::webrtc::PeerConnectionInterface::IceConnectionState newState);

    MCNAPI void createOffer(::webrtc::PeerConnectionInterface::RTCConfiguration const& config, ::brstd::move_only_function<void(::Bedrock::Result<::webrtc::scoped_refptr<::webrtc::PeerConnectionInterface>, ::NetherNet::ESessionError>)>&& onComplete);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::NetherNet::ContextProxy const& ctx, ::webrtc::scoped_refptr<::webrtc::PeerConnectionFactory> factory, ::webrtc::scoped_refptr<::NetherNet::PeerConnectionObserver> observer, ::brstd::move_only_function<void(::std::variant<::NetherNet::ConnectRequest, ::NetherNet::ConnectResponse, ::NetherNet::ConnectError, ::NetherNet::CandidateAdd> const&)const> sendMessage, uint64 sessionId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::NetherNet::ESessionError $checkTimeout(::std::chrono::seconds timeout) const;

    MCNAPI void $_onCreateSession(::webrtc::RTCErrorOr<::webrtc::SessionDescriptionInterface*> const& offerOrError);

    MCNAPI void $_onSetLocalDescription(::webrtc::RTCError result);

    MCNAPI void $onRemoteAnswer(::NetherNet::ConnectResponse const& answer);

    MCNAPI void $onRemoteError(::NetherNet::ConnectError const& error);

    MCNAPI void $_onSetRemoteDescription(::webrtc::RTCError result);

    MCNAPI void $_onLocalIceCandidate(::webrtc::IceCandidateInterface const* iceCandidate);

    MCNAPI void $onRemoteIceCandidate(::NetherNet::CandidateAdd const& candidate);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
