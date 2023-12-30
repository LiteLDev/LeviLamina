#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct VideoReceiverInfo {
public:
    // prevent constructor by default
    VideoReceiverInfo& operator=(VideoReceiverInfo const&);
    VideoReceiverInfo(VideoReceiverInfo const&);
    VideoReceiverInfo();

public:
    // NOLINTBEGIN
    // symbol: ??1VideoReceiverInfo@cricket@@QEAA@XZ
    MCAPI ~VideoReceiverInfo();

    // NOLINTEND
};

}; // namespace cricket
