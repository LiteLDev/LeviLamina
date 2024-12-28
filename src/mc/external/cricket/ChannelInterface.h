#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class ChannelInterface {
public:
    // prevent constructor by default
    ChannelInterface& operator=(ChannelInterface const&);
    ChannelInterface(ChannelInterface const&);
    ChannelInterface();
};

} // namespace cricket
