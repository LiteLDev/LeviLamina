#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class VideoMediaSendChannelInterface {
public:
    // prevent constructor by default
    VideoMediaSendChannelInterface& operator=(VideoMediaSendChannelInterface const&);
    VideoMediaSendChannelInterface(VideoMediaSendChannelInterface const&);
    VideoMediaSendChannelInterface();
};

}; // namespace cricket
