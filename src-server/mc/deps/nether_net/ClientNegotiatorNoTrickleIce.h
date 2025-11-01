#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ClientNegotiator.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IceCandidateInterface; }
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
    // vIndex: 15
    virtual void _onSetLocalDescription(::webrtc::RTCError) /*override*/;

    // vIndex: 17
    virtual void _onLocalIceCandidate(::webrtc::IceCandidateInterface const* iceCandidate) /*override*/;

    // vIndex: 0
    virtual ~ClientNegotiatorNoTrickleIce() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
