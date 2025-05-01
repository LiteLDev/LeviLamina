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
    // member functions
    // NOLINTBEGIN
    MCNAPI void PostCreateSessionDescriptionFailure(::webrtc::CreateSessionDescriptionObserver*, ::webrtc::RTCError);

    MCNAPI void
    PostGetStats(::webrtc::StatsObserver*, ::webrtc::LegacyStatsCollectorInterface*, ::webrtc::MediaStreamTrackInterface*);

    MCNAPI void PostSetSessionDescriptionFailure(::webrtc::SetSessionDescriptionObserver*, ::webrtc::RTCError&&);

    MCNAPI void PostSetSessionDescriptionSuccess(::webrtc::SetSessionDescriptionObserver*);

    MCNAPI void RequestUsagePatternReport(::std::function<void()>, int);

    MCNAPI ~PeerConnectionMessageHandler();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
