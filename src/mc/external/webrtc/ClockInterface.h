#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class ClockInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClockInterface();

    virtual int64 TimeNanos() const = 0;
    // NOLINTEND
};

} // namespace webrtc
