#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class TimingFrameInfo {
public:
    // prevent constructor by default
    TimingFrameInfo& operator=(TimingFrameInfo const&);
    TimingFrameInfo(TimingFrameInfo const&);
    TimingFrameInfo();

public:
    // NOLINTBEGIN
    // symbol: ?IsInvalid@TimingFrameInfo@webrtc@@QEBA_NXZ
    MCAPI bool IsInvalid() const;

    // symbol: ?IsOutlier@TimingFrameInfo@webrtc@@QEBA_NXZ
    MCAPI bool IsOutlier() const;

    // symbol: ?IsTimerTriggered@TimingFrameInfo@webrtc@@QEBA_NXZ
    MCAPI bool IsTimerTriggered() const;

    // symbol: ?ToString@TimingFrameInfo@webrtc@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToString() const;

    // NOLINTEND
};

}; // namespace webrtc
