#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class MutexLock {
public:
    // prevent constructor by default
    MutexLock& operator=(MutexLock const&);
    MutexLock(MutexLock const&);
    MutexLock();

public:
    // NOLINTBEGIN
    // symbol: ??1MutexLock@webrtc@@QEAA@XZ
    MCAPI ~MutexLock();

    // NOLINTEND
};

}; // namespace webrtc
