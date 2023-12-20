#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class DataChannelObserver {
public:
    // prevent constructor by default
    DataChannelObserver& operator=(DataChannelObserver const&);
    DataChannelObserver(DataChannelObserver const&);
    DataChannelObserver();

public:
    // NOLINTBEGIN
    // symbol: ?OnBufferedAmountChange@DataChannelObserver@webrtc@@UEAAX_K@Z
    MCVAPI void OnBufferedAmountChange(uint64);

    // NOLINTEND
};

}; // namespace webrtc
