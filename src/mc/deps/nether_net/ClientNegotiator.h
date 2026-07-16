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
namespace NetherNet { class ConnectResponse; }
namespace webrtc { class IceCandidate; }
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
    ::ll::UntypedStorage<8, 24> mUnk353022;
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
    virtual void createOffer(
        ::webrtc::PeerConnectionInterface::RTCConfiguration const&,
        ::brstd::move_only_function<void(
            ::Bedrock::Result<::webrtc::scoped_refptr<::webrtc::PeerConnectionInterface>, ::NetherNet::ESessionError>
        )>&&
    );

    virtual ::NetherNet::ESessionError checkTimeout(::std::chrono::seconds) const /*override*/;

    virtual void _onCreateSession(::webrtc::RTCErrorOr<::webrtc::SessionDescriptionInterface*> const&) /*override*/;

    virtual void _onSetLocalDescription(::webrtc::RTCError) /*override*/;

    virtual void onRemoteAnswer(::NetherNet::ConnectResponse const&) /*override*/;

    virtual void onRemoteError(::NetherNet::ConnectError const&) /*override*/;

    virtual void _onSetRemoteDescription(::webrtc::RTCError) /*override*/;

    virtual void _onLocalIceCandidate(::webrtc::IceCandidate const*);

    virtual void onRemoteIceCandidate(::NetherNet::CandidateAdd const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
