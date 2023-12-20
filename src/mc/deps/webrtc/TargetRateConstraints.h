#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct TargetRateConstraints {
public:
    // prevent constructor by default
    TargetRateConstraints& operator=(TargetRateConstraints const&);

public:
    // NOLINTBEGIN
    // symbol: ??0TargetRateConstraints@webrtc@@QEAA@XZ
    MCAPI TargetRateConstraints();

    // symbol: ??0TargetRateConstraints@webrtc@@QEAA@AEBU01@@Z
    MCAPI TargetRateConstraints(struct webrtc::TargetRateConstraints const&);

    // symbol: ??1TargetRateConstraints@webrtc@@QEAA@XZ
    MCAPI ~TargetRateConstraints();

    // NOLINTEND
};

}; // namespace webrtc
