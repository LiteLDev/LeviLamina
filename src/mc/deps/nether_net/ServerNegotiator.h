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

class ServerNegotiator : public ::NetherNet::PeerConnectionNegotiator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk8986cb;
    ::ll::UntypedStorage<8, 16> mUnk57dd8b;
    ::ll::UntypedStorage<8, 64> mUnkd02d39;
    ::ll::UntypedStorage<8, 24> mUnk880021;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerNegotiator& operator=(ServerNegotiator const&);
    ServerNegotiator(ServerNegotiator const&);
    ServerNegotiator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 16
    virtual void _onSetRemoteDescription(::webrtc::RTCError result) /*override*/;

    // vIndex: 14
    virtual void
    _onCreateSession(::webrtc::RTCErrorOr<::webrtc::SessionDescriptionInterface*> const& answerOrError) /*override*/;

    // vIndex: 15
    virtual void _onSetLocalDescription(::webrtc::RTCError result) /*override*/;

    // vIndex: 17
    virtual void _onLocalIceCandidate(::webrtc::IceCandidateInterface const* iceCandidate);

    // vIndex: 13
    virtual void onRemoteIceCandidate(::NetherNet::CandidateAdd const& candidate) /*override*/;

    // vIndex: 0
    virtual ~ServerNegotiator() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerNegotiator(
        ::NetherNet::ContextProxy const&                                           ctx,
        ::webrtc::scoped_refptr<::webrtc::PeerConnectionFactory>                   factory,
        ::webrtc::scoped_refptr<::NetherNet::PeerConnectionObserver>               observer,
        ::brstd::move_only_function<void(::std::variant<
                                         ::NetherNet::ConnectRequest,
                                         ::NetherNet::ConnectResponse,
                                         ::NetherNet::ConnectError,
                                         ::NetherNet::CandidateAdd> const&) const> sendMessage,
        uint64                                                                     sessionId
    );

    MCNAPI void _onIceConnectionChange(::webrtc::PeerConnectionInterface::IceConnectionState newState);

    MCNAPI void createAnswer(
        ::webrtc::PeerConnectionInterface::RTCConfiguration const& config,
        ::NetherNet::ConnectRequest const&                         offer,
        ::brstd::move_only_function<void(
            ::Bedrock::Result<::webrtc::scoped_refptr<::webrtc::PeerConnectionInterface>, ::NetherNet::ESessionError>
        )>&&                                                       onComplete
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::NetherNet::ContextProxy const&                                           ctx,
        ::webrtc::scoped_refptr<::webrtc::PeerConnectionFactory>                   factory,
        ::webrtc::scoped_refptr<::NetherNet::PeerConnectionObserver>               observer,
        ::brstd::move_only_function<void(::std::variant<
                                         ::NetherNet::ConnectRequest,
                                         ::NetherNet::ConnectResponse,
                                         ::NetherNet::ConnectError,
                                         ::NetherNet::CandidateAdd> const&) const> sendMessage,
        uint64                                                                     sessionId
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_onSetRemoteDescription(::webrtc::RTCError result);

    MCNAPI void $_onCreateSession(::webrtc::RTCErrorOr<::webrtc::SessionDescriptionInterface*> const& answerOrError);

    MCNAPI void $_onSetLocalDescription(::webrtc::RTCError result);

    MCNAPI void $_onLocalIceCandidate(::webrtc::IceCandidateInterface const* iceCandidate);

    MCNAPI void $onRemoteIceCandidate(::NetherNet::CandidateAdd const& candidate);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
