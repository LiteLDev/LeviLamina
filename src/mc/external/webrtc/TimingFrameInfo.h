#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct TimingFrameInfo {
public:
    // prevent constructor by default
    TimingFrameInfo& operator=(TimingFrameInfo const&);
    TimingFrameInfo(TimingFrameInfo const&);
    TimingFrameInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool IsInvalid() const;

    MCAPI bool IsOutlier() const;

    MCAPI bool IsTimerTriggered() const;

    MCAPI ::std::string ToString() const;
    // NOLINTEND
};

} // namespace webrtc
