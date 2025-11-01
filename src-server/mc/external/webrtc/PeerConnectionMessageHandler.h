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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkee6d7b;
    ::ll::UntypedStorage<8, 8> mUnkdb9e54;
    // NOLINTEND

public:
    // prevent constructor by default
    PeerConnectionMessageHandler& operator=(PeerConnectionMessageHandler const&);
    PeerConnectionMessageHandler(PeerConnectionMessageHandler const&);
    PeerConnectionMessageHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void PostCreateSessionDescriptionFailure(::webrtc::CreateSessionDescriptionObserver* observer, ::webrtc::RTCError error);

    MCNAPI void PostGetStats(::webrtc::StatsObserver* observer, ::webrtc::LegacyStatsCollectorInterface* legacy_stats, ::webrtc::MediaStreamTrackInterface* track);

    MCNAPI void PostSetSessionDescriptionFailure(::webrtc::SetSessionDescriptionObserver* observer, ::webrtc::RTCError&& error);

    MCNAPI void PostSetSessionDescriptionSuccess(::webrtc::SetSessionDescriptionObserver* observer);

    MCNAPI void RequestUsagePatternReport(::std::function<void()> func, int delay_ms);

    MCNAPI ~PeerConnectionMessageHandler();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
