#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class DataChannelSink {
public:
    // prevent constructor by default
    DataChannelSink& operator=(DataChannelSink const&);
    DataChannelSink(DataChannelSink const&);
    DataChannelSink();
};

}; // namespace webrtc
