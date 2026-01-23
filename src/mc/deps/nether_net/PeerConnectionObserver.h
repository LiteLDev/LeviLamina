#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/RefCountedObject.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/PeerConnectionObserver.h"
#include "mc/external/webrtc/RTCStatsCollectorCallback.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataChannelInterface; }
namespace webrtc { class IceCandidateInterface; }
namespace webrtc { class RTCStatsReport; }
// clang-format on

namespace NetherNet {

class PeerConnectionObserver : public ::rtc::RefCountedObject<::webrtc::RTCStatsCollectorCallback>,
                               public ::webrtc::PeerConnectionObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnk6a5098;
    ::ll::UntypedStorage<8, 128> mUnkcbbbae;
    ::ll::UntypedStorage<8, 128> mUnk72f583;
    ::ll::UntypedStorage<8, 128> mUnk29cbfb;
    ::ll::UntypedStorage<8, 128> mUnk7ff481;
    ::ll::UntypedStorage<8, 128> mUnk674fc0;
    // NOLINTEND

public:
    // prevent constructor by default
    PeerConnectionObserver& operator=(PeerConnectionObserver const&);
    PeerConnectionObserver(PeerConnectionObserver const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void OnStatsDelivered(::webrtc::scoped_refptr<::webrtc::RTCStatsReport const> const& report) /*override*/;

    virtual void OnSignalingChange(::webrtc::PeerConnectionInterface::SignalingState) /*override*/;

    virtual void OnDataChannel(::webrtc::scoped_refptr<::webrtc::DataChannelInterface> dataChannel) /*override*/;

    virtual void OnIceConnectionChange(::webrtc::PeerConnectionInterface::IceConnectionState newState) /*override*/;

    virtual void OnIceGatheringChange(::webrtc::PeerConnectionInterface::IceGatheringState new_state) /*override*/;

    virtual void OnIceCandidate(::webrtc::IceCandidateInterface const* candidate) /*override*/;

    virtual void OnIceCandidateError(
        ::std::string const& address,
        int                  port,
        ::std::string const& url,
        int                  errorCode,
        ::std::string const& errorMessage
    ) /*override*/;

    virtual ~PeerConnectionObserver() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PeerConnectionObserver();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $OnStatsDelivered(::webrtc::scoped_refptr<::webrtc::RTCStatsReport const> const& report);

    MCNAPI void $OnSignalingChange(::webrtc::PeerConnectionInterface::SignalingState);

    MCNAPI void $OnDataChannel(::webrtc::scoped_refptr<::webrtc::DataChannelInterface> dataChannel);

    MCNAPI void $OnIceConnectionChange(::webrtc::PeerConnectionInterface::IceConnectionState newState);

    MCNAPI void $OnIceGatheringChange(::webrtc::PeerConnectionInterface::IceGatheringState new_state);

    MCNAPI void $OnIceCandidate(::webrtc::IceCandidateInterface const* candidate);

    MCNAPI void $OnIceCandidateError(
        ::std::string const& address,
        int                  port,
        ::std::string const& url,
        int                  errorCode,
        ::std::string const& errorMessage
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPeerConnectionObserver();

    MCNAPI static void** $vftableForRefCountedObject();
    // NOLINTEND
};

} // namespace NetherNet
