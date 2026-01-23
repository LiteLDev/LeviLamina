#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ClientNegotiator.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"
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
namespace webrtc { class RTCError; }
// clang-format on

namespace NetherNet {

class ClientNegotiatorNoTrickleIce : public ::NetherNet::ClientNegotiator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk765ea0;
    ::ll::UntypedStorage<8, 64> mUnk53a086;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientNegotiatorNoTrickleIce& operator=(ClientNegotiatorNoTrickleIce const&);
    ClientNegotiatorNoTrickleIce(ClientNegotiatorNoTrickleIce const&);
    ClientNegotiatorNoTrickleIce();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _onSetLocalDescription(::webrtc::RTCError) /*override*/;

    virtual void _onLocalIceCandidate(::webrtc::IceCandidateInterface const* iceCandidate) /*override*/;

    virtual ~ClientNegotiatorNoTrickleIce() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientNegotiatorNoTrickleIce(
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

    MCNAPI void _onIceGatheringChange(::webrtc::PeerConnectionInterface::IceGatheringState newState);
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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_onSetLocalDescription(::webrtc::RTCError);

    MCNAPI void $_onLocalIceCandidate(::webrtc::IceCandidateInterface const* iceCandidate);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
