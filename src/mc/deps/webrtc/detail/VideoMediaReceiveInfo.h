#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct VideoMediaReceiveInfo {
public:
    // prevent constructor by default
    VideoMediaReceiveInfo& operator=(VideoMediaReceiveInfo const&);

public:
    // NOLINTBEGIN
    // symbol: ??0VideoMediaReceiveInfo@cricket@@QEAA@XZ
    MCAPI VideoMediaReceiveInfo();

    // symbol: ??0VideoMediaReceiveInfo@cricket@@QEAA@AEBU01@@Z
    MCAPI VideoMediaReceiveInfo(struct cricket::VideoMediaReceiveInfo const&);

    // symbol: ??1VideoMediaReceiveInfo@cricket@@QEAA@XZ
    MCAPI ~VideoMediaReceiveInfo();

    // NOLINTEND
};

}; // namespace cricket
