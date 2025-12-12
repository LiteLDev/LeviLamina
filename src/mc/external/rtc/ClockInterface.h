#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class ClockInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClockInterface() = default;

    virtual int64 TimeNanos() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace rtc
