#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

template <typename T0>
class VideoSourceInterface {
public:
    // prevent constructor by default
    VideoSourceInterface& operator=(VideoSourceInterface const&);
    VideoSourceInterface(VideoSourceInterface const&);
    VideoSourceInterface();
};

}; // namespace rtc
