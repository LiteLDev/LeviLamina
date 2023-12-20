#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class ScopedTaskSafetyDetached {
public:
    // prevent constructor by default
    ScopedTaskSafetyDetached& operator=(ScopedTaskSafetyDetached const&);
    ScopedTaskSafetyDetached(ScopedTaskSafetyDetached const&);
    ScopedTaskSafetyDetached();

public:
    // NOLINTBEGIN
    // symbol: ??1ScopedTaskSafetyDetached@webrtc@@QEAA@XZ
    MCAPI ~ScopedTaskSafetyDetached();

    // NOLINTEND
};

}; // namespace webrtc
