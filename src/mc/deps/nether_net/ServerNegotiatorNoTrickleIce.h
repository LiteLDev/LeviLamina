#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ServerNegotiator.h"
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

class ServerNegotiatorNoTrickleIce : public ::NetherNet::ServerNegotiator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf33e28;
    ::ll::UntypedStorage<8, 64> mUnk554506;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerNegotiatorNoTrickleIce& operator=(ServerNegotiatorNoTrickleIce const&);
    ServerNegotiatorNoTrickleIce(ServerNegotiatorNoTrickleIce const&);
    ServerNegotiatorNoTrickleIce();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _onSetLocalDescription(::webrtc::RTCError) /*override*/;

    virtual void _onLocalIceCandidate(::webrtc::IceCandidateInterface const* iceCandidate) /*override*/;

    virtual ~ServerNegotiatorNoTrickleIce() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerNegotiatorNoTrickleIce(
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
