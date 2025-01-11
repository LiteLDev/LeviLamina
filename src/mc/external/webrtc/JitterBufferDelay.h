#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct JitterBufferDelay {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI int GetMs() const;

    MCAPI void Set(::std::optional<double>);
    // NOLINTEND
};

} // namespace webrtc
