#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc::webrtc_logging_impl {

struct ToStringVal {
public:
    // prevent constructor by default
    ToStringVal& operator=(ToStringVal const&);
    ToStringVal(ToStringVal const&);
    ToStringVal();

public:
    // NOLINTBEGIN
    // symbol: ??1ToStringVal@webrtc_logging_impl@rtc@@QEAA@XZ
    MCAPI ~ToStringVal();

    // NOLINTEND
};

}; // namespace rtc::webrtc_logging_impl
