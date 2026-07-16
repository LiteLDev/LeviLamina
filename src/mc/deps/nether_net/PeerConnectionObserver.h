#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/PeerConnectionObserver.h"
#include "mc/external/webrtc/RTCStatsCollectorCallback.h"
#include "mc/external/webrtc/RefCountedObject.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataChannelInterface; }
namespace webrtc { class IceCandidate; }
namespace webrtc { class RTCStatsReport; }
// clang-format on

namespace NetherNet {

class PeerConnectionObserver : public ::webrtc::RefCountedObject<::webrtc::RTCStatsCollectorCallback>,
                               public ::webrtc::PeerConnectionObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnk6a5098;
    ::ll::UntypedStorage<8, 128> mUnkcbbbae;
    ::ll::UntypedStorage<8, 128> mUnk72f583;
    ::ll::UntypedStorage<8, 128> mUnkc9aa5b;
    ::ll::UntypedStorage<8, 128> mUnke6f099;
    ::ll::UntypedStorage<8, 128> mUnk674fc0;
    // NOLINTEND

public:
    // prevent constructor by default
    PeerConnectionObserver& operator=(PeerConnectionObserver const&);
    PeerConnectionObserver(PeerConnectionObserver const&);
    PeerConnectionObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void OnStatsDelivered(::webrtc::scoped_refptr<::webrtc::RTCStatsReport const> const&) /*override*/;

    virtual void OnSignalingChange(::webrtc::PeerConnectionInterface::SignalingState) /*override*/;

    virtual void OnDataChannel(::webrtc::scoped_refptr<::webrtc::DataChannelInterface>) /*override*/;

    virtual void OnIceConnectionChange(::webrtc::PeerConnectionInterface::IceConnectionState) /*override*/;

    virtual void OnIceGatheringChange(::webrtc::PeerConnectionInterface::IceGatheringState) /*override*/;

    virtual void OnIceCandidate(::webrtc::IceCandidate const*) /*override*/;

    virtual void
    OnIceCandidateError(::std::string const&, int, ::std::string const&, int, ::std::string const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
