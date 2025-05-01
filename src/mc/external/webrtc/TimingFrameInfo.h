#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct TimingFrameInfo {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool IsInvalid() const;

    MCNAPI bool IsOutlier() const;

    MCNAPI bool IsTimerTriggered() const;

    MCNAPI ::std::string ToString() const;
    // NOLINTEND
};

} // namespace webrtc
