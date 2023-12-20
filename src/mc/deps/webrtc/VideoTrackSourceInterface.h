#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct VideoTrackSourceConstraints; }
// clang-format on

namespace webrtc {

class VideoTrackSourceInterface {
public:
    // VideoTrackSourceInterface inner types declare
    // clang-format off
    struct Stats;
    // clang-format on

    // VideoTrackSourceInterface inner types define
    struct Stats {
    public:
        // prevent constructor by default
        Stats& operator=(Stats const&);
        Stats(Stats const&);
        Stats();
    };

public:
    // prevent constructor by default
    VideoTrackSourceInterface& operator=(VideoTrackSourceInterface const&);
    VideoTrackSourceInterface(VideoTrackSourceInterface const&);
    VideoTrackSourceInterface();

public:
    // NOLINTBEGIN
    // symbol: ?ProcessConstraints@VideoTrackSourceInterface@webrtc@@UEAAXAEBUVideoTrackSourceConstraints@2@@Z
    MCVAPI void ProcessConstraints(struct webrtc::VideoTrackSourceConstraints const&);

    // symbol: ??1VideoTrackSourceInterface@webrtc@@MEAA@XZ
    MCVAPI ~VideoTrackSourceInterface();

    // NOLINTEND
};

}; // namespace webrtc
