#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class MediaSendChannelInterface {
public:
    // prevent constructor by default
    MediaSendChannelInterface& operator=(MediaSendChannelInterface const&);
    MediaSendChannelInterface(MediaSendChannelInterface const&);
    MediaSendChannelInterface();
};

}; // namespace cricket
