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
    // member functions
    // NOLINTBEGIN
    MCAPI void PostCreateSessionDescriptionFailure(::webrtc::CreateSessionDescriptionObserver*, ::webrtc::RTCError);

    MCAPI void
    PostGetStats(::webrtc::StatsObserver*, ::webrtc::LegacyStatsCollectorInterface*, ::webrtc::MediaStreamTrackInterface*);

    MCAPI void PostSetSessionDescriptionFailure(::webrtc::SetSessionDescriptionObserver*, ::webrtc::RTCError&&);

    MCAPI void PostSetSessionDescriptionSuccess(::webrtc::SetSessionDescriptionObserver*);

    MCAPI void RequestUsagePatternReport(::std::function<void()>, int);

    MCAPI ~PeerConnectionMessageHandler();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
