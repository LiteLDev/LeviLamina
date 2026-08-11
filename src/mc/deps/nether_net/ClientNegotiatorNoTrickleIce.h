#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ClientNegotiator.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"
#include "mc/platform/Result.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IceCandidate; }
namespace webrtc { class PeerConnectionInterface; }
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
    virtual void createOffer(
        ::webrtc::PeerConnectionInterface::RTCConfiguration const& config,
        ::brstd::move_only_function<void(
            ::Bedrock::Result<::webrtc::scoped_refptr<::webrtc::PeerConnectionInterface>, ::NetherNet::ESessionError>
        )>&&                                                       onComplete
    ) /*override*/;

    virtual void _onSetLocalDescription(::webrtc::RTCError result) /*override*/;

    virtual void _onLocalIceCandidate(::webrtc::IceCandidate const* iceCandidate) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _onIceGatheringChange(::webrtc::PeerConnectionInterface::IceGatheringState newState);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $createOffer(
        ::webrtc::PeerConnectionInterface::RTCConfiguration const& config,
        ::brstd::move_only_function<void(
            ::Bedrock::Result<::webrtc::scoped_refptr<::webrtc::PeerConnectionInterface>, ::NetherNet::ESessionError>
        )>&&                                                       onComplete
    );

    MCNAPI void $_onSetLocalDescription(::webrtc::RTCError result);

    MCNAPI void $_onLocalIceCandidate(::webrtc::IceCandidate const* iceCandidate);


    // NOLINTEND
};

} // namespace NetherNet
