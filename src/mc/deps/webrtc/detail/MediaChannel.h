#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class MediaChannel {
public:
    // prevent constructor by default
    MediaChannel& operator=(MediaChannel const&);
    MediaChannel(MediaChannel const&);
    MediaChannel();
};

}; // namespace cricket
