#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
// clang-format on

namespace webrtc {

class RateLimiter {
public:
    // prevent constructor by default
    RateLimiter& operator=(RateLimiter const&);
    RateLimiter(RateLimiter const&);
    RateLimiter();

public:
    // NOLINTBEGIN
    // symbol: ??0RateLimiter@webrtc@@QEAA@PEAVClock@1@_J@Z
    MCAPI RateLimiter(class webrtc::Clock*, int64);

    // symbol: ?SetMaxRate@RateLimiter@webrtc@@QEAAXI@Z
    MCAPI void SetMaxRate(uint);

    // symbol: ?TryUseRate@RateLimiter@webrtc@@QEAA_N_K@Z
    MCAPI bool TryUseRate(uint64);

    // symbol: ??1RateLimiter@webrtc@@QEAA@XZ
    MCAPI ~RateLimiter();

    // NOLINTEND
};

}; // namespace webrtc
