#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class VideoMediaReceiveChannelInterface {
public:
    // prevent constructor by default
    VideoMediaReceiveChannelInterface& operator=(VideoMediaReceiveChannelInterface const&);
    VideoMediaReceiveChannelInterface(VideoMediaReceiveChannelInterface const&);
    VideoMediaReceiveChannelInterface();
};

}; // namespace cricket
