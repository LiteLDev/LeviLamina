#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct JitterBufferDelay {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int GetMs() const;

    MCNAPI void Set(::std::optional<double>);
    // NOLINTEND
};

} // namespace webrtc
