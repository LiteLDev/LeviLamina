#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioTrackInterface; }
namespace webrtc { class MediaStreamTrackInterface; }
namespace webrtc { class StatsReport; }
// clang-format on

namespace webrtc {

class LegacyStatsCollectorInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LegacyStatsCollectorInterface();

    virtual void AddLocalAudioTrack(::webrtc::AudioTrackInterface*, uint) = 0;

    virtual void RemoveLocalAudioTrack(::webrtc::AudioTrackInterface*, uint) = 0;

    virtual void GetStats(::webrtc::MediaStreamTrackInterface*, ::std::vector<::webrtc::StatsReport const*>*) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
