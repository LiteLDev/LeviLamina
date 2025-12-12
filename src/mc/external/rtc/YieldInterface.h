#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class YieldInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~YieldInterface() = default;

    virtual void YieldExecution() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace rtc
