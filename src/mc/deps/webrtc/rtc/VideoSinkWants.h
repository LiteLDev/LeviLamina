#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct VideoSinkWants {
public:
    // NOLINTBEGIN
    // symbol: ??0VideoSinkWants@rtc@@QEAA@XZ
    MCAPI VideoSinkWants();

    // symbol: ??0VideoSinkWants@rtc@@QEAA@AEBU01@@Z
    MCAPI VideoSinkWants(struct rtc::VideoSinkWants const&);

    // symbol: ??4VideoSinkWants@rtc@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct rtc::VideoSinkWants& operator=(struct rtc::VideoSinkWants const&);

    // symbol: ??1VideoSinkWants@rtc@@QEAA@XZ
    MCAPI ~VideoSinkWants();

    // NOLINTEND
};

}; // namespace rtc
