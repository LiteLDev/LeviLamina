#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct VideoCodecH264 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd87d46;
    ::ll::UntypedStorage<1, 1> mUnkf440dc;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoCodecH264& operator=(VideoCodecH264 const&);
    VideoCodecH264(VideoCodecH264 const&);
    VideoCodecH264();
};

} // namespace webrtc
