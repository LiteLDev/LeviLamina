#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct VideoTrackSourceConstraints {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkad9774;
    ::ll::UntypedStorage<8, 16> mUnka4e182;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoTrackSourceConstraints& operator=(VideoTrackSourceConstraints const&);
    VideoTrackSourceConstraints(VideoTrackSourceConstraints const&);
    VideoTrackSourceConstraints();
};

} // namespace webrtc
