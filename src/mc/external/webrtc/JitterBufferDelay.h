#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct JitterBufferDelay {
public:
    // prevent constructor by default
    JitterBufferDelay& operator=(JitterBufferDelay const&);
    JitterBufferDelay(JitterBufferDelay const&);
    JitterBufferDelay();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int GetMs() const;

    MCAPI void Set(::std::optional<double>);
    // NOLINTEND
};

} // namespace webrtc
