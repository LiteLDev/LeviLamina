#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class ClockInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClockInterface() = default;

    // vIndex: 1
    virtual int64 TimeNanos() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
