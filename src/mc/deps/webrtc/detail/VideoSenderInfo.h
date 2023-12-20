#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct VideoSenderInfo {
public:
    // prevent constructor by default
    VideoSenderInfo& operator=(VideoSenderInfo const&);
    VideoSenderInfo(VideoSenderInfo const&);

public:
    // NOLINTBEGIN
    // symbol: ??0VideoSenderInfo@cricket@@QEAA@XZ
    MCAPI VideoSenderInfo();

    // symbol: ??1VideoSenderInfo@cricket@@QEAA@XZ
    MCAPI ~VideoSenderInfo();

    // NOLINTEND
};

}; // namespace cricket
