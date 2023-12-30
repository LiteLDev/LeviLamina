#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct VideoMediaSendInfo {
public:
    // prevent constructor by default
    VideoMediaSendInfo& operator=(VideoMediaSendInfo const&);

public:
    // NOLINTBEGIN
    // symbol: ??0VideoMediaSendInfo@cricket@@QEAA@XZ
    MCAPI VideoMediaSendInfo();

    // symbol: ??0VideoMediaSendInfo@cricket@@QEAA@AEBU01@@Z
    MCAPI VideoMediaSendInfo(struct cricket::VideoMediaSendInfo const&);

    // symbol: ??1VideoMediaSendInfo@cricket@@QEAA@XZ
    MCAPI ~VideoMediaSendInfo();

    // NOLINTEND
};

}; // namespace cricket
