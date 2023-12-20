#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct DataChannelInit {
public:
    // prevent constructor by default
    DataChannelInit& operator=(DataChannelInit const&);
    DataChannelInit(DataChannelInit const&);
    DataChannelInit();

public:
    // NOLINTBEGIN
    // symbol: ??1DataChannelInit@webrtc@@QEAA@XZ
    MCAPI ~DataChannelInit();

    // NOLINTEND
};

}; // namespace webrtc
