#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class SctpDataChannelControllerInterface {
public:
    // prevent constructor by default
    SctpDataChannelControllerInterface& operator=(SctpDataChannelControllerInterface const&);
    SctpDataChannelControllerInterface(SctpDataChannelControllerInterface const&);
    SctpDataChannelControllerInterface();
};

} // namespace webrtc
