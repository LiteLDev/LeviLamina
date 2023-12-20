#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class CreateSessionDescriptionObserver; }
namespace webrtc { class LegacyStatsCollectorInterface; }
namespace webrtc { class MediaStreamTrackInterface; }
namespace webrtc { class RTCError; }
namespace webrtc { class SetSessionDescriptionObserver; }
namespace webrtc { class StatsObserver; }
// clang-format on

namespace webrtc {

class PeerConnectionMessageHandler {
public:
    // prevent constructor by default
    PeerConnectionMessageHandler& operator=(PeerConnectionMessageHandler const&);
    PeerConnectionMessageHandler(PeerConnectionMessageHandler const&);
    PeerConnectionMessageHandler();

public:
    // NOLINTBEGIN
    // symbol:
    // ?PostCreateSessionDescriptionFailure@PeerConnectionMessageHandler@webrtc@@QEAAXPEAVCreateSessionDescriptionObserver@2@VRTCError@2@@Z
    MCAPI void
    PostCreateSessionDescriptionFailure(class webrtc::CreateSessionDescriptionObserver*, class webrtc::RTCError);

    // symbol:
    // ?PostGetStats@PeerConnectionMessageHandler@webrtc@@QEAAXPEAVStatsObserver@2@PEAVLegacyStatsCollectorInterface@2@PEAVMediaStreamTrackInterface@2@@Z
    MCAPI void
    PostGetStats(class webrtc::StatsObserver*, class webrtc::LegacyStatsCollectorInterface*, class webrtc::MediaStreamTrackInterface*);

    // symbol:
    // ?PostSetSessionDescriptionFailure@PeerConnectionMessageHandler@webrtc@@QEAAXPEAVSetSessionDescriptionObserver@2@$$QEAVRTCError@2@@Z
    MCAPI void PostSetSessionDescriptionFailure(class webrtc::SetSessionDescriptionObserver*, class webrtc::RTCError&&);

    // symbol:
    // ?PostSetSessionDescriptionSuccess@PeerConnectionMessageHandler@webrtc@@QEAAXPEAVSetSessionDescriptionObserver@2@@Z
    MCAPI void PostSetSessionDescriptionSuccess(class webrtc::SetSessionDescriptionObserver*);

    // symbol: ?RequestUsagePatternReport@PeerConnectionMessageHandler@webrtc@@QEAAXV?$function@$$A6AXXZ@std@@H@Z
    MCAPI void RequestUsagePatternReport(std::function<void(void)>, int);

    // symbol: ??1PeerConnectionMessageHandler@webrtc@@QEAA@XZ
    MCAPI ~PeerConnectionMessageHandler();

    // NOLINTEND
};

}; // namespace webrtc
