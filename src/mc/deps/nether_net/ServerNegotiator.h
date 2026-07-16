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
namespace NetherNet { class ConnectRequest; }
namespace webrtc { class IceCandidate; }
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
    ::ll::UntypedStorage<8, 24> mUnk6790c6;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerNegotiator& operator=(ServerNegotiator const&);
    ServerNegotiator(ServerNegotiator const&);
    ServerNegotiator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void createAnswer(
        ::webrtc::PeerConnectionInterface::RTCConfiguration const&,
        ::NetherNet::ConnectRequest const&,
        ::brstd::move_only_function<void(
            ::Bedrock::Result<::webrtc::scoped_refptr<::webrtc::PeerConnectionInterface>, ::NetherNet::ESessionError>
        )>&&
    );

    virtual void _onSetRemoteDescription(::webrtc::RTCError) /*override*/;

    virtual void _onCreateSession(::webrtc::RTCErrorOr<::webrtc::SessionDescriptionInterface*> const&) /*override*/;

    virtual void _onSetLocalDescription(::webrtc::RTCError) /*override*/;

    virtual void _onLocalIceCandidate(::webrtc::IceCandidate const*);

    virtual void onRemoteIceCandidate(::NetherNet::CandidateAdd const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
