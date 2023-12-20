#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

template <typename T0>
class VideoSinkInterface {
public:
    // prevent constructor by default
    VideoSinkInterface& operator=(VideoSinkInterface const&);
    VideoSinkInterface(VideoSinkInterface const&);
    VideoSinkInterface();
};

}; // namespace rtc
