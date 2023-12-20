#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct DataChannelStats {
public:
    // prevent constructor by default
    DataChannelStats& operator=(DataChannelStats const&);
    DataChannelStats(DataChannelStats const&);
    DataChannelStats();

public:
    // NOLINTBEGIN
    // symbol: ??1DataChannelStats@webrtc@@QEAA@XZ
    MCAPI ~DataChannelStats();

    // NOLINTEND
};

}; // namespace webrtc
