#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class DataChannelTransportInterface {
public:
    // prevent constructor by default
    DataChannelTransportInterface& operator=(DataChannelTransportInterface const&);
    DataChannelTransportInterface(DataChannelTransportInterface const&);
    DataChannelTransportInterface();
};

}; // namespace webrtc
