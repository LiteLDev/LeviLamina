#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class Mutex {
public:
    // prevent constructor by default
    Mutex& operator=(Mutex const&);
    Mutex(Mutex const&);
    Mutex();

public:
    // NOLINTBEGIN
    // symbol: ??1Mutex@webrtc@@QEAA@XZ
    MCAPI ~Mutex();

    // NOLINTEND
};

}; // namespace webrtc
