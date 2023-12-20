#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class JitterBufferDelay {
public:
    // prevent constructor by default
    JitterBufferDelay& operator=(JitterBufferDelay const&);
    JitterBufferDelay(JitterBufferDelay const&);

public:
    // NOLINTBEGIN
    // symbol: ?GetMs@JitterBufferDelay@webrtc@@QEBAHXZ
    MCAPI int GetMs() const;

    // symbol: ??0JitterBufferDelay@webrtc@@QEAA@XZ
    MCAPI JitterBufferDelay();

    // symbol: ?Set@JitterBufferDelay@webrtc@@QEAAXV?$optional@N@std@@@Z
    MCAPI void Set(std::optional<double>);

    // NOLINTEND
};

}; // namespace webrtc
