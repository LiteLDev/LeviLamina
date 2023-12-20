#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SsrcInfo {
public:
    // prevent constructor by default
    SsrcInfo& operator=(SsrcInfo const&);
    SsrcInfo(SsrcInfo const&);
    SsrcInfo();

public:
    // NOLINTBEGIN
    // symbol: ??1SsrcInfo@webrtc@@QEAA@XZ
    MCAPI ~SsrcInfo();

    // NOLINTEND
};

}; // namespace webrtc
