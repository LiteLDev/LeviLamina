#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ServerNegotiator.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IceCandidateInterface; }
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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
