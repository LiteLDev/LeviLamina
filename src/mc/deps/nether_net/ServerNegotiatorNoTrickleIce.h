#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/ServerNegotiator.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"
#include "mc/platform/Result.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class ConnectRequest; }
namespace webrtc { class IceCandidate; }
namespace webrtc { class PeerConnectionInterface; }
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
    virtual void createAnswer(
        ::webrtc::PeerConnectionInterface::RTCConfiguration const&,
        ::NetherNet::ConnectRequest const&,
        ::brstd::move_only_function<void(
            ::Bedrock::Result<::webrtc::scoped_refptr<::webrtc::PeerConnectionInterface>, ::NetherNet::ESessionError>
        )>&&
    ) /*override*/;

    virtual void _onSetLocalDescription(::webrtc::RTCError) /*override*/;

    virtual void _onLocalIceCandidate(::webrtc::IceCandidate const*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
